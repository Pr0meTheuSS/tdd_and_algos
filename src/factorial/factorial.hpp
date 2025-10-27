#pragma once

namespace TddMath {
unsigned long factorial(unsigned long n) {
    /** 
        Let's estimate roughly 2^n <= n!
        Then if the value of 2^n causes the return value type to overflow, 
        then the factorial will also cause the return value type to overflow. 
        It is sufficient to check the bit size (width in bits) of the return value to determine 
        whether we expect an overflow or not.
    */
    if (n >= ULONG_WIDTH) {
        throw std::overflow_error("factorial param more than nitwidth of returning type, so value may be overfloved");
    }

    return (n == 0) ? 1ul : n * factorial(n - 1);
}
};  // namespace TddMath
