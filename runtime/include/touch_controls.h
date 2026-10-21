#ifndef MH3_TOUCH_CONTROLS_H
#define MH3_TOUCH_CONTROLS_H

#include <stdint.h>
#include <stdbool.h>
#include "../native/mh3_classic_map.h"

#ifdef __cplusplus
extern "C" {
#endif

// Initialize touch controls system and event watcher.
void TouchControls_Init(void);

// Enable or disable touch controls overlay.
void TouchControls_SetEnabled(bool enabled);
bool TouchControls_IsEnabled(void);

// Process an SDL touch or window event (called from event watcher or pump).
// Handles SDL_EVENT_FINGER_DOWN, SDL_EVENT_FINGER_UP, SDL_EVENT_FINGER_MOTION,
// and SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED / RESIZED.
void TouchControls_HandleSdlEvent(const void* sdlEvent);

// Update input state: merges on-screen touch inputs into the given controller state.
void TouchControls_UpdateSample(uint16_t* buttons, int16_t* leftX, int16_t* leftY,
                                int16_t* rightX, int16_t* rightY,
                                uint8_t* triggerL, uint8_t* triggerR);

// Render the touch controls overlay via OpenGL ES 3.0.
// Called right before SDL_GL_SwapWindow.
void TouchControls_RenderGL(int windowWidth, int windowHeight);

#ifdef __cplusplus
}
#endif

#endif // MH3_TOUCH_CONTROLS_H
