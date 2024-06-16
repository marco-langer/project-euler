#pragma once

#include <concepts>

namespace ml {

struct is_even
{
    template <std::integral I>
    constexpr auto operator()(I value) const noexcept -> bool
    {
        return value % I{ 2 } == I{};
    }
};

}   // namespace ml
