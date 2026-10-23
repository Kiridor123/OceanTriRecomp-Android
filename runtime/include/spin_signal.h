// A counter that one thread advances and one other thread waits on, for
// threads that hand each other work (the render thread's packets, the guest
// worker's jobs, the game thread limiter). Waiting can spin first, which
// catches the next of a burst at once, then the waiter parks until the
// counter moves: on the host on a kernel semaphore, which counts its signals
// and so cannot lose a wakeup (the pthread condition variable there can),
// elsewhere on the counter's futex, or for a wait with a time limit
// (AwaitChangeFor) on a condition variable. A wait that is known to be short
// spins only (SpinForChange). Spinning reads no clock: a millisecond is a
// spin count measured once, at the first wait.
#pragma once

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdint>

#include <condition_variable>
#include <mutex>

class SpinSignal {
  public:
    uint32_t Load() const noexcept { return value_.load(std::memory_order_acquire); }

    // Advances the counter and wakes the waiter if it is parked; whether it
    // was (on the host; a timed wait elsewhere).
    bool Advance() noexcept {
        value_.fetch_add(1, std::memory_order_seq_cst);
        value_.notify_one();

        // A wait with a time limit parks on the condition variable.
        if (sleeping_.load(std::memory_order_seq_cst) && sleeping_.exchange(false, std::memory_order_seq_cst)) {
            std::lock_guard lock(mutex_);
            wake_.notify_one();
            return true;
        }

        return false;
    }

    // Waits until the counter is no longer `seen`, spinning for about spinUs
    // microseconds before parking; returns its value. One waiter at a time.
    uint32_t AwaitChange(uint32_t seen, uint32_t spinUs = 1000) {
        if (const uint32_t now = Spin(seen, spinUs); now != seen)
            return now;
        for (uint32_t now = Load();; now = Load()) {
            if (now != seen)
                return now;

            value_.wait(seen, std::memory_order_acquire);
        }
    }

    // AwaitChange that gives up after about timeoutUs microseconds: returns
    // the counter, which is still `seen` when it timed out.
    uint32_t AwaitChangeFor(uint32_t seen, uint32_t spinUs, uint32_t timeoutUs) {
        if (const uint32_t now = Spin(seen, spinUs); now != seen)
            return now;
        const auto deadline = std::chrono::steady_clock::now() + std::chrono::microseconds(timeoutUs);
        std::unique_lock lock(mutex_);

        for (;;) {
            // Announce, then re-check, as on the host. The notifier takes the
            // lock, which this thread holds until the wait releases it, so
            // its notification cannot come between the check and the wait.
            sleeping_.store(true, std::memory_order_seq_cst);

            if (const uint32_t now = value_.load(std::memory_order_seq_cst); now != seen) {
                sleeping_.store(false, std::memory_order_relaxed);
                return now;
            }

            if (wake_.wait_until(lock, deadline) == std::cv_status::timeout) {
                sleeping_.store(false, std::memory_order_relaxed);
                return Load();
            }
        }
    }

    // Spins until the counter is no longer `seen`, without parking: for a wait
    // known to be short, the other thread already being on it.
    uint32_t SpinForChange(uint32_t seen) const noexcept {
        for (;;) {
            if (const uint32_t now = Load(); now != seen)
                return now;

            Pause();
        }
    }

  private:
    // Spins for about spinUs microseconds while the counter is `seen`;
    // returns its value.
    uint32_t Spin(uint32_t seen, uint32_t spinUs) const noexcept {
        for (uint64_t spins = uint64_t(SpinsPerMillisecond()) * spinUs / 1000; spins; --spins) {
            if (const uint32_t now = Load(); now != seen)
                return now;

            Pause();
        }

        return seen;
    }
    // How many spins of AwaitChange's loop take a millisecond, timed over
    // 64Ki spins of the same loop once per process. The probe is shared state,
    // like the counter, so the compiler keeps its load in the loop.
    static uint32_t SpinsPerMillisecond() noexcept {
        static const uint32_t spins = [] {
            constexpr uint64_t Probe = 1u << 16;
            const uint64_t start = NowUs();

            for (uint64_t i = 0; i < Probe; ++i) {
                if (calibration_.load(std::memory_order_acquire) == UINT32_MAX)
                    break;

                Pause();
            }

            const uint64_t us = NowUs() - start;
            return uint32_t(us ? std::min<uint64_t>(Probe * 1000 / us, UINT32_MAX) : Probe * 1000);
        }();

        return spins;
    }

    static uint64_t NowUs() noexcept {
        return uint64_t(std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now().time_since_epoch()).count());
    }

    static void Pause() noexcept {
#if defined(__arm__) || defined(__aarch64__)
        __asm__ __volatile__("yield");
#elif defined(__x86_64__)
        __builtin_ia32_pause();
#endif
    }

    static inline std::atomic<uint32_t> calibration_{0};
    std::atomic<uint32_t> value_{0};
    std::atomic<bool> sleeping_{false};
    std::mutex mutex_;
    std::condition_variable wake_;
};
