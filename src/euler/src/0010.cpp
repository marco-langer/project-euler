#include "euler/0010.hpp"

#include "utils/algorithm.hpp"
#include "utils/primes.hpp"

namespace {

auto primesUpTo(int maxPrimeExclusive) -> std::vector<int>
{
    if (maxPrimeExclusive < 3) {
        return {};
    }

    std::vector<int> primes{ 2 };
    while (primes.back() < maxPrimeExclusive) {
        ml::appendNextPrime(primes);
    }
    primes.pop_back();

    return primes;
}

}   // namespace

auto e0010(int maxPrimeExclusive) -> long long
{
    const std::vector<int> primes{ primesUpTo(maxPrimeExclusive) };
    return ml::ranges::accumulate(primes, 0LL);
}
