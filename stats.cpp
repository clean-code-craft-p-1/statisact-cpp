#include "stats.h"

#include <numeric>
#include <ranges>
#include <span>

namespace Statistics {

Stats Statistics::ComputeStatistics(const std::span<const double> numbers) {
  if (numbers.empty()) {
    return {};
  }

  return Stats{
      .min = std::ranges::min(numbers),
      .max = std::ranges::max(numbers),
      .average = std::accumulate(std::begin(numbers), std::end(numbers), 0.0) /
                 static_cast<double>(numbers.size())};
}

} // namespace Statistics
