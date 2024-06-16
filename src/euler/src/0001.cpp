#include "euler/0001.hpp"

#include "utils/algorithm.hpp"

#include <numeric>
#include <ranges>
#include <vector>

constexpr auto isDivisibleByThreeOrFive{ [](int i) { return i % 3 == 0 || i % 5 == 0; } };

auto e0001a(int n) -> int
{
    std::vector<int> divisibleByThreeOrFive;
    for (int i = 0; i < n; ++i) {
        if (isDivisibleByThreeOrFive(i)) {
            divisibleByThreeOrFive.push_back(i);
        }
    }

    return std::accumulate(divisibleByThreeOrFive.cbegin(), divisibleByThreeOrFive.cend(), 0);
}

auto e0001b(int n) -> int
{
    return ml::ranges::accumulate(
        std::views::iota(0, n) | std::views::filter(isDivisibleByThreeOrFive));
}
