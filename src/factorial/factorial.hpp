#pragma once

namespace TddMath {
unsigned long factorial(unsigned long n) {
    return (n == 0) ? 1ul : n * factorial(n - 1);
}
};  // namespace TddMath