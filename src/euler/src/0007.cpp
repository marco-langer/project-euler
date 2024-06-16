#include "euler/0007.hpp"

#include "utils/primes.hpp"

#include <gsl/narrow>

namespace {

auto calcPrimes(std::size_t count) -> std::vector<int>
{
    if (count == 0) {
        return {};
    }

    std::vector<int> primes{ 2 };
    primes.reserve(count);
    for (std::size_t i{ 0 }; i < count - 1; ++i) {
        ml::appendNextPrime(primes);
    }

    return primes;
}

}   // namespace

auto e0007(int index) -> int { return calcPrimes(gsl::narrow_cast<std::size_t>(index)).back(); }
