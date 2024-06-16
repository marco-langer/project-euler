#pragma once

#include <vector>

namespace ml {

class FibonacciGenerator
{
public:
    auto operator()() -> int;

private:
    int i{ 0 };
    int j{ 1 };
};

auto fibonacciUpTo(int maxExlusive) -> std::vector<int>;

}
