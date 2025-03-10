#include "stats.h"

#include <algorithm>
#include <numeric>
#include <ranges>
#include <span>

namespace Statistics {

Stats::Stats(const std::span<const double> numbers)
{
    if (numbers.empty()) return;

    min_     = std::ranges::min(numbers);
    max_     = std::ranges::max(numbers);
    average_ = std::accumulate(std::begin(numbers), std::end(numbers), 0.0)
               / static_cast<double>(numbers.size());
}

double Stats::min() const noexcept
{
    return min_;
}

double Stats::max() const noexcept
{
    return max_;
}

double Stats::average() const noexcept
{
    return average_;
}
} // namespace Statistics
