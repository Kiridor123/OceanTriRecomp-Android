#pragma once
// Polyfills for C++20 standard library features missing in Debian 11's libstdc++-10
// when compiling with Clang 19+.
#ifdef __cplusplus
#include <bit>
#include <tuple>
#include <type_traits>

#if !defined(__cpp_lib_bit_cast)
namespace std {
template <class To, class From>
constexpr std::enable_if_t<sizeof(To) == sizeof(From) && std::is_trivially_copyable_v<From> && std::is_trivially_copyable_v<To>, To>
bit_cast(const From& src) noexcept {
    return __builtin_bit_cast(To, src);
}
} // namespace std
#endif
#endif
