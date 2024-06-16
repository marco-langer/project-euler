#pragma once

#include <span>
#include <vector>

namespace ml {

/**
 * @brief returns the amount of digits in \p number
 *
 * Example: 304 => 3
 */
auto numDigits(int number) -> int;

/**
 * @brief extracts the digits of \p value and writes the result into \p digits
 *
 * Example: 304 => [3, 0, 4]
 */
auto toDigits(std::vector<int>& digits, int value) -> void;

/**
 * @brief joins the range of digits into a number
 *
 * Example: [0, 7, 0, 2] => 702
 */
auto joinToNumber(std::span<const int> digits) -> int;

}   // namespace ml
