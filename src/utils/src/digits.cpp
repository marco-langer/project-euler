#include "utils/digits.hpp"

#include <algorithm>
#include <cmath>
#include <ranges>

namespace ml {

auto numDigits(int number) -> int
{
    int digits{ 1 };
    number /= 10;
    while (number > 0) {
        ++digits;
        number /= 10;
    }

    return digits;
}

auto toDigits(std::vector<int>& digits, int value) -> void
{
    digits.clear();
    int remainder = value % 10;
    while (value > 0) {
        digits.push_back(remainder);
        value /= 10;
        remainder = value % 10;
    }
    std::ranges::reverse(digits);
}

auto joinToNumber(std::span<const int> digits) -> int
{
    int result{ 0 };
    for (int i = 0; int digit : digits | std::views::reverse) {
        result += digit * std::pow(10, i++);
    }

    return result;
}

}   // namespace ml
