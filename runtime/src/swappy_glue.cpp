// Android Frame Pacing (Swappy) disabled.
// Running with native CPU FramePacer (SDL_GL_SwapWindow).
#include <SDL3/SDL.h>

extern "C" bool MH3_SwappySwap(SDL_Window* window) {
    return false;
}

extern "C" bool MH3_SwappyIsActive() {
    return false;
}
