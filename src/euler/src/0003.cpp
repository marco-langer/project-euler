#include "euler/0003.hpp"

#include "utils/primes.hpp"

#include <algorithm>

namespace {

auto integerFactorization(long long int number) -> std::vector<int>
{
    std::vector<int> factorization;
    std::vector<int> primes{ 2 };

    while (number > 1) {
        const int prime{ primes.back() };
        const long long int maybeFactor{ number % prime };

        if (maybeFactor == 0) {
            factorization.push_back(prime);
            number /= prime;
        } else {
            ml::appendNextPrime(primes);
        }
    }

    return factorization;
}

}   // namespace

auto e0003(long long int number) -> int
{
    if (number < 3) {
        return number;
    }

    const std::vector<int> factorization{ integerFactorization(number) };
    return *std::ranges::max_element(factorization);
}
