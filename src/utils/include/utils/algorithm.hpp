#pragma once

#include <algorithm>
#include <functional>
#include <ranges>

namespace ml::ranges {

namespace detail {

    struct fold_left_closure
    {
        template <typename Iter, std::sentinel_for<Iter> S, typename T, typename Op>
        constexpr auto operator()(Iter first, S last, T initial, Op op) const
        {
            if (first == last) {
                return initial;
            }

            for (; first != last; ++first) {
                initial = op(std::move(initial), *first);
            }
            return initial;
        }

        template <std::ranges::input_range Range, typename T, typename Op>
        constexpr auto operator()(Range&& range, T initial, Op op) const
        {
            return this->operator()(
                std::ranges::begin(range),
                std::ranges::end(range),
                std::move(initial),
                std::move(op));
        }
    };

    struct accumulate_closure
    {
        template <std::ranges::input_range Range, typename T = std::ranges::range_value_t<Range>>
        constexpr auto operator()(Range&& range, T initial = T{}) const
        {
            return fold_left_closure{}(
                std::forward<Range>(range), std::move(initial), std::plus<>{});
        }
    };

    struct all_true_closure
    {
        template <std::ranges::input_range Range>
        constexpr auto operator()(Range&& range) const -> bool
        {
            return std::ranges::all_of(std::forward<Range>(range), std::identity{});
        }
    };

}   // namespace detail

inline constexpr detail::fold_left_closure fold_left;
inline constexpr detail::accumulate_closure accumulate;
inline constexpr detail::all_true_closure all_true;

}   // namespace ml::ranges
