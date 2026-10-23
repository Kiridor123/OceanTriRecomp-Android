#pragma once
#include <algorithm>
#include <atomic>
#include <fstream>
#include <mutex>

namespace mh3_mouse_look_sensitivity {
inline std::atomic<int>& Storage() {
    static std::atomic<int> value{60};
    return value;
}
inline std::once_flag& LoadFlag() {
    static std::once_flag flag;
    return flag;
}
inline void LoadOnce() {
    std::call_once(LoadFlag(), [] {
        int value = 60;
        std::ifstream input("MH3UI.mouse_sensitivity");
        if (input >> value) {
            Storage().store(std::clamp(value, 5, 100), std::memory_order_relaxed);
        }
    });
}
inline int GetPercent() {
    LoadOnce();
    return Storage().load(std::memory_order_relaxed);
}
inline void SetPercent(int value) {
    LoadOnce();
    Storage().store(std::clamp(value, 5, 100), std::memory_order_relaxed);
}
inline double GetSensitivity() {
    return static_cast<double>(GetPercent()) / 100.0;
}
inline bool Save() {
    LoadOnce();
    std::ofstream output("MH3UI.mouse_sensitivity", std::ios::trunc);
    if (!output) return false;
    output << GetPercent() << '\n';
    return static_cast<bool>(output);
}
}