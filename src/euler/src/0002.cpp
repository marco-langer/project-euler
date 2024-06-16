#include "euler/0002.hpp"

#include "utils/algorithm.hpp"
#include "utils/fibonacci.hpp"
#include "utils/functional.hpp"

#include <ranges>
#include <vector>

auto e0002(int maxExlusive) -> int
{
    const std::vector<int> fibs{ ml::fibonacciUpTo(maxExlusive) };
    return ml::ranges::accumulate(fibs | std::views::filter(ml::is_even{}));
}
