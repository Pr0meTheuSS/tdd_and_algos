#pragma once

namespace TddMath {
unsigned long long fibonacci(unsigned long long n) {
    if (n == 0ull) {
        return 0;
    }
    if (n <= 2ull) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
}  // namespace TddMath