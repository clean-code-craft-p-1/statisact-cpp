#include "stats.h"

#include <gtest/gtest.h>

#include <array>
#include <cmath>

TEST(Statistics, ReportsAverageMinMax) {
  constexpr auto kValues = std::array{1.5, 8.9, 3.2, 4.5};
  constexpr auto kExpectedAverage = 4.525;
  constexpr auto kExpectedMax = 8.9;
  constexpr auto kExpectedMin = 1.5;

  const auto [min, max, average] = Statistics::ComputeStatistics(kValues);
  EXPECT_DOUBLE_EQ(min, kExpectedMin);
  EXPECT_DOUBLE_EQ(max, kExpectedMax);
  EXPECT_DOUBLE_EQ(average, kExpectedAverage);
}

TEST(Statistics, AverageNaNForEmpty) {

  // All fields of computedStats (average, max, min) must be
  // NAN (not-a-number), as defined in math.h
  const auto [min, max, average] = Statistics::ComputeStatistics({});
  EXPECT_TRUE(std::isnan(min));
  EXPECT_TRUE(std::isnan(max));
  EXPECT_TRUE(std::isnan(average));
}
