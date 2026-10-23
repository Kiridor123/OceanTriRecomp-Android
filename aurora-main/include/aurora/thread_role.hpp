#pragma once


namespace aurora {
// Any: the user cores but the game thread's (0-1); the scheduler places the
// thread. Core 2 is the game thread's alone, core 0 the render thread's and
// core 1 the draw thread's (runtime/src/guest_worker.cpp). Workers run on
// core 3 (the cap unlocker opens it), core 0 without it.
enum class ThreadRole { Game, Render, Worker, Any };
inline void pin_current_thread(ThreadRole role) noexcept {
  (void)role;
}
} // namespace aurora
