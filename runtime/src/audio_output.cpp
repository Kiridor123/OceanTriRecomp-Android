#include "audio_dma.h"
#include "fatal.h"
#include "audio_output_statistics.h"
#include "audio/native_audio_mixer.h"
#ifdef MH3_DEVELOPMENT
#include "dev_options.h"
#endif
#include <SDL3/SDL.h>
#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdlib>
#include <cstdio>
#include <sched.h>
#ifdef _WIN32
#include <windows.h>
#define sched_getcpu() int(GetCurrentProcessorNumber())
#endif
#include <stdexcept>
#include <string>
#include <sys/syscall.h>
#include <thread>
#include <unistd.h>
#include <vector>
namespace {
SDL_AudioStream* stream = nullptr;
uint32_t streamRate = 0;
void Shutdown() {
    if (stream)
        SDL_DestroyAudioStream(stream);

    stream = nullptr;
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

void Check(bool result) {
    if (!result)
        MH3_THROW(std::runtime_error(std::string("SDL audio: ") + SDL_GetError()));
}
} // namespace

void QueueHostPcm(const uint8_t* data, uint32_t bytes, uint32_t rate) {
    if (bytes % 4 || (rate != 32000 && rate != 48000))
        MH3_THROW(std::runtime_error("Invalid Wii PCM block"));

    if (!stream) {
        Check(SDL_InitSubSystem(SDL_INIT_AUDIO));
        SDL_AudioSpec spec{SDL_AUDIO_S16, 2, int(rate)};
        stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        Check(stream != nullptr);
        Check(SDL_ResumeAudioStreamDevice(stream));
        streamRate = rate;
        std::atexit(Shutdown);
        std::fprintf(stderr, "MH3 audio: SDL playback opened at %u Hz stereo\n", rate);
    }

    if (rate != streamRate) {
        SDL_AudioSpec spec{SDL_AUDIO_S16, 2, int(rate)};
        Check(SDL_SetAudioStreamFormat(stream, &spec, nullptr));
        streamRate = rate;
    }
#ifdef MH3_DEVELOPMENT
    // MH3_CAPTURE=...,audio=FILE: every guest PCM block as raw s16le stereo
    // at the rate printed at open (playback drops below do not apply).
    static FILE* dump = [] {
        const char* path = CaptureOptions().Value("audio");
        return path ? std::fopen(path, "wb") : nullptr;
    }();

    if (dump) {
        const auto pcm = DecodeWiiPcm(data, bytes);
        std::fwrite(pcm.data(), 1, bytes, dump);
        std::fflush(dump);
    }
#endif
    // Bound host latency after long guest stalls while still delivering the
    // corresponding guest completion callbacks. Report dropped audio explicitly.
    if (SDL_GetAudioStreamQueued(stream) > int(rate)) {
        static bool reported = false;

        if (!reported) {
            std::fprintf(stderr, "MH3 audio: playback backlog; dropping excess PCM blocks\n");
            reported = true;
        }

        return;
    }

    const auto samples = DecodeWiiPcm(data, bytes);
    Check(SDL_PutAudioStreamData(stream, samples.data(), bytes));
}

NativeAudioOutputStatistics GetNativeAudioOutputStatistics() {
    return {};
}

// Native mixer output: SDL pulls 32 kHz stereo from the mixer on its own audio
// thread. Without a playback device a native thread consumes the mix at the
// same rate, so the game's audio clock still advances.
namespace NativeAudio {
namespace {
SDL_AudioStream* pullStream = nullptr;
std::thread nullSink;
std::atomic<bool> nullSinkStop{false};
constexpr uint32_t kChunkFrames = 384;  // 12 ms

// Foreground recovery (ReopenIfStalled): frames SDL has pulled so far, the
// fade-in still owed by a newly opened stream, and the app's lifecycle state.
std::atomic<uint64_t> pulledFrames{0};
std::atomic<uint32_t> fadeInFrames{0};
constexpr uint32_t kFadeInFrames = 640; // 20 ms
std::atomic<bool> foreground{true};
std::atomic<bool> stallCheckRunning{false};
bool sdlPlayback = false;

#ifdef MH3_DEVELOPMENT
// MH3_CAPTURE=...,audio=FILE: the mixed output, raw s16le stereo at 32 kHz.
FILE* DumpFile() {
    static FILE* dump = [] {
        const char* path = CaptureOptions().Value("audio");
        return path ? std::fopen(path, "wb") : nullptr;
    }();
    return dump;
}
#endif

void Render(int16_t* out, uint32_t frames) {
    MixerRender(out, frames);
#ifdef MH3_DEVELOPMENT
    if (FILE* dump = DumpFile())
        std::fwrite(out, 4, frames, dump);
#endif
}

void SDLCALL Pull(void*, SDL_AudioStream* audio, int additional, int) {
    static bool noted = false;

    if (!noted) {
        NoteAudioThread();
        noted = true;
    }

    int16_t buffer[kChunkFrames * 2];

    for (int frames = (additional + 3) / 4; frames > 0;) {
        const uint32_t n = uint32_t(std::min<int>(frames, int(kChunkFrames)));
        Render(buffer, n);

        // Ramp a reopened stream up from silence: starting mid-waveform clicks.
        if (uint32_t fade = fadeInFrames.load(std::memory_order_relaxed)) {
            for (uint32_t i = 0; i < n && fade; ++i, --fade) {
                const float gain = float(kFadeInFrames - fade) / float(kFadeInFrames);
                buffer[i * 2] = int16_t(float(buffer[i * 2]) * gain);
                buffer[i * 2 + 1] = int16_t(float(buffer[i * 2 + 1]) * gain);
            }

            fadeInFrames.store(fade, std::memory_order_relaxed);
        }

        SDL_PutAudioStreamData(audio, buffer, int(n * 4));
        pulledFrames.fetch_add(n, std::memory_order_relaxed);
        frames -= int(n);
    }
}

bool OpenPullStream() {
    const SDL_AudioSpec spec{SDL_AUDIO_S16, 2, int(kSampleRate)};
    pullStream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, Pull, nullptr);

    if (pullStream && SDL_ResumeAudioStreamDevice(pullStream))
        return true;

    if (pullStream)
        SDL_DestroyAudioStream(pullStream);

    pullStream = nullptr;
    return false;
}

void RunNullSink() {
    NoteAudioThread();
    using Clock = std::chrono::steady_clock;
    const auto period = std::chrono::microseconds(kChunkFrames * 1000000ull / kSampleRate);
    auto next = Clock::now();
    int16_t buffer[kChunkFrames * 2];

    while (!nullSinkStop.load(std::memory_order_relaxed)) {
        Render(buffer, kChunkFrames);
        next += period;
        std::this_thread::sleep_until(next);
    }
}

void StartNullSink() {
    nullSinkStop.store(false);
    nullSink = std::thread(RunNullSink);
    std::fprintf(stderr, "MH3 audio: null sink at %u Hz\n", unsigned(kSampleRate));
}

// Android can take the playback device from a backgrounded app (another app
// claiming the output). SDL's restart on resume then fails with
// AAUDIO_ERROR_DISCONNECTED and never recovers: the stream stops pulling and
// the game stays silent. If nothing was pulled shortly after returning to the
// foreground, close the stream (releasing the dead device) and open a new one.
void ReopenIfStalled(uint64_t pulledAtResume) {
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

    // Without a stream (an earlier reopen failed) the null sink is mixing: retry.
    if (foreground.load() && (!pullStream || pulledFrames.load() == pulledAtResume)) {
        if (pullStream)
            SDL_DestroyAudioStream(pullStream);

        if (nullSink.joinable()) {
            nullSinkStop.store(true);
            nullSink.join();
        }

        fadeInFrames.store(kFadeInFrames);

        if (!OpenPullStream()) {
            std::fprintf(stderr, "MH3 audio: SDL playback lost (%s); mixing to a null sink\n", SDL_GetError());
            StartNullSink();
        }
    }

    stallCheckRunning.store(false);
}

// SDL sends these from the thread that pumps Android lifecycle events, the
// foreground one after its own (possibly failed) restart of the paused device.
bool SDLCALL OnAppLifecycle(void*, SDL_Event* event) {
    if (event->type == SDL_EVENT_WILL_ENTER_BACKGROUND) {
        foreground.store(false);
    } else if (event->type == SDL_EVENT_DID_ENTER_FOREGROUND) {
        foreground.store(true);

        if (sdlPlayback && !stallCheckRunning.exchange(true))
            std::thread(ReopenIfStalled, pulledFrames.load()).detach();
    }

    return true;
}
} // namespace

void NoteAudioThread() {
#ifndef __EMSCRIPTEN__
    MixerStatistics& s = GetMixer().Statistics();
    s.thread.store(int(syscall(SYS_gettid)), std::memory_order_relaxed);
    s.core.store(sched_getcpu(), std::memory_order_relaxed);
#endif
}

void StartAudioOutput() {
    if (pullStream || nullSink.joinable())
        return;

    bool null = false;
#ifdef MH3_DEVELOPMENT
    // MH3_AUDIO_NULL=1: no playback device, the mix is consumed at 32 kHz.
    if (const char* v = std::getenv("MH3_AUDIO_NULL"))
        null = v[0] == '1';
#endif
    if (!null) {
#ifndef __EMSCRIPTEN__
        // Not on the web: its ScriptProcessorNode takes a power of two, SDL picks it.
        SDL_SetHint(SDL_HINT_AUDIO_DEVICE_SAMPLE_FRAMES, "384");
#endif

        if (SDL_InitSubSystem(SDL_INIT_AUDIO)) {
            if (OpenPullStream()) {
                sdlPlayback = true;
                SDL_AddEventWatch(OnAppLifecycle, nullptr);
                std::fprintf(stderr, "MH3 audio: SDL playback at %u Hz stereo (%s)\n", unsigned(kSampleRate), SDL_GetCurrentAudioDriver());
                std::atexit(StopAudioOutput);
                return;
            }

            std::fprintf(stderr, "MH3 audio: no SDL playback (%s); mixing to a null sink\n", SDL_GetError());
        }
    }

    StartNullSink();
    std::atexit(StopAudioOutput);
}

void StopAudioOutput() {
    if (pullStream) {
        SDL_DestroyAudioStream(pullStream);
        pullStream = nullptr;
    }

    if (nullSink.joinable()) {
        nullSinkStop.store(true);
        nullSink.join();
    }
}

} // namespace NativeAudio
