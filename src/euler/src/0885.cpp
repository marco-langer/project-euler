#include "euler/0885.hpp"

#include "utils/digits.hpp"

#include <algorithm>
#include <cassert>
#include <cmath>
#include <vector>

namespace {

int f_impl(std::vector<int>& digits, int value)
{
    ml::toDigits(digits, value);
    std::erase(digits, 0);
    std::ranges::sort(digits);
    return ml::joinToNumber(digits);
}

}   // namespace

int f(int value)
{
    std::vector<int> buffer;
    return f_impl(buffer, value);
}

int S(int numDigits)
{
    std::vector<int> buffer;
    const int N = std::pow(10, numDigits);
    int result = 0;
    for (int i = 1; i < N; ++i) {
        result += f_impl(buffer, i);
    }
    // TODO modulo
    // result %= 1'123'455'689;
    assert(result >= 0);
    return result;
}
