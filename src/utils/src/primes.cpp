#include "utils/primes.hpp"

#include <gsl/narrow>

#include <cassert>
#include <cmath>

namespace ml {

auto isPrimeNumber(std::span<const int> primes, int number) -> bool
{
    const int upperLimit{ gsl::narrow_cast<int>(std::sqrt(number)) };
    assert(upperLimit < primes.back());

    for (int prime : primes) {
        if (prime > upperLimit) {
            return true;
        }
        if (number % prime == 0) {
            return false;
        }
    }

    return true;
}

auto appendNextPrime(std::vector<int>& primes) -> void
{
    int i{ primes.back() + 1 };
    while (true) {
        if (isPrimeNumber(primes, i)) {
            primes.push_back(i);
            break;
        }
        ++i;
    }
}

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

}   // namespace ml
