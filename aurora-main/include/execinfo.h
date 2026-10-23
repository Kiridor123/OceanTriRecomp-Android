#pragma once
static inline int backtrace(void** b, int n) { (void)b; (void)n; return 0; }
static inline void backtrace_symbols_fd(void* const* b, int n, int fd) { (void)b; (void)n; (void)fd; }

