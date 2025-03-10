#pragma once

#include <cmath>
#include <span>

namespace Statistics {

struct Stats {
  double min{NAN};
  double max{NAN};
  double average{NAN};
};

[[nodiscard]] Stats ComputeStatistics(std::span<const double> numbers);
} // namespace Statistics
