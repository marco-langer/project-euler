#include "euler/0025.hpp"

#include "utils/digits.hpp"
#include "utils/fibonacci.hpp"

auto e0025(int digits) -> int
{
    ml::FibonacciGenerator generator;
    int i{ 1 };
    while (true) {
        const int fib{ generator() };
        if (ml::numDigits(fib) >= digits) {
            return i;
        }
        ++i;
    }
}
