#pragma once

namespace TddMath {
unsigned long long factorial(unsigned long long n) {
    constexpr unsigned long long kFactorialMaxInputValueBeforeOverflow{21ull};
    if (n >= kFactorialMaxInputValueBeforeOverflow) {
        throw std::overflow_error(
            "factorial param more than nitwidth of returning type, so value may be overfloved");
    }

    return (n == 0) ? 1ull : n * factorial(n - 1);
}
};  // namespace TddMath
