#pragma once

/**
 * Sorted Digits
 *
 * For a positive integer d, let f(d) be the number created by sorting the digits of d in ascending
 * order, removing any zeros.
 *
 * For example, f(3403) = 334.
 *
 * Let S(n) be the sum of f(d) for all positive integers d of n digits or less. You are given S(1)
 * and S(5) = 1'543'545'675.
 *
 * Find S(18). Give your answer modulo 1'123'455'689.
 */

#include <vector>

int f(int value);
int S(int numDigits);
