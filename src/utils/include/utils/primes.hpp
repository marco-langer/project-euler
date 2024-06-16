#pragma once

#include <span>
#include <vector>

namespace ml {

auto isPrimeNumber(std::span<const int> primes, int number) -> bool;

auto appendNextPrime(std::vector<int>& primes) -> void;

auto primesUpTo(int maxPrimeExclusive) -> std::vector<int>;

}   // namespace ml
