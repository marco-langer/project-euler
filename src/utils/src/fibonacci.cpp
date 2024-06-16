#include "utils/fibonacci.hpp"

namespace ml {

auto FibonacciGenerator::operator()() -> int
{
    int fib{ j };
    j += i;
    i = fib;

    return fib;
}

auto fibonacciUpTo(int maxExlusive) -> std::vector<int>
{
    FibonacciGenerator gen;
    std::vector<int> result;
    while (true) {
        const int fib{ gen() };
        if (fib < maxExlusive) {
            result.emplace_back(fib);
        } else {
            break;
        }
    }

    return result;
}

}
