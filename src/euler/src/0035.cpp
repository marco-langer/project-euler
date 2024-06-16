#include "euler/0035.hpp"

#include "utils/algorithm.hpp"
#include "utils/digits.hpp"
#include "utils/functional.hpp"
#include "utils/primes.hpp"

#include <algorithm>
#include <ranges>
#include <span>

namespace {

/**
 * @brief Rotates the range left by one and return the number from the digits.
 *
 * @pre digits not empty
 *
 * Example: [2, 5, 4] => 542
 */
auto toLeftRotatedNumber(std::span<int> digits) -> int
{
    std::ranges::rotate(digits, digits.begin() + 1);
    return ml::joinToNumber(digits);
}

}   // namespace

auto e0035(int maxExclusive) -> int
{
    const std::vector<int> primes{ ml::primesUpTo(maxExclusive) };

    auto isCircularPrime{ [&primes, digits = std::vector<int>{}](int prime) mutable -> bool {
        ml::toDigits(digits, prime);
        if (std::ranges::any_of(digits, ml::is_even{})) {
            return prime == 2;
        }

        return ml::ranges::all_true(
            std::views::iota(1, ml::numDigits(prime))
            | std::views::transform([&digits](int) { return toLeftRotatedNumber(digits); })
            | std::views::transform(
                [&primes](int number) { return ml::isPrimeNumber(primes, number); }));
    } };

    return std::ranges::distance(primes | std::views::filter(isCircularPrime));
}
