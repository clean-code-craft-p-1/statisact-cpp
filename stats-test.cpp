#include "stats.h"

#include <gtest/gtest.h>

#include <array>
#include <cmath>

TEST(Statistics, ReportsAverageMinMax)
{
    constexpr auto kValues          = std::array{1.5, 8.9, 3.2, 4.5};
    constexpr auto kExpectedAverage = 4.525;
    constexpr auto kExpectedMax     = 8.9;
    constexpr auto kExpectedMin     = 1.5;

    const auto stats = Statistics::Stats(kValues);
    EXPECT_DOUBLE_EQ(stats.min(), kExpectedMin);
    EXPECT_DOUBLE_EQ(stats.max(), kExpectedMax);
    EXPECT_DOUBLE_EQ(stats.average(), kExpectedAverage);
}

TEST(Statistics, AverageNaNForEmpty)
{
    // All fields of computedStats (average, max, min) must be
    // NAN (not-a-number), as defined in math.h
    const auto stats = Statistics::Stats({});
    EXPECT_TRUE(std::isnan(stats.min()));
    EXPECT_TRUE(std::isnan(stats.max()));
    EXPECT_TRUE(std::isnan(stats.average()));
}
