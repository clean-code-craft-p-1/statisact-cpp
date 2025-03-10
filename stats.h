#pragma once

#include <cmath>
#include <span>

namespace Statistics {

struct Stats
{
    explicit Stats(std::span<const double> numbers);

    [[nodiscard]] double min() const noexcept;
    [[nodiscard]] double max() const noexcept;
    [[nodiscard]] double average() const noexcept;

  private:
    double min_{NAN};
    double max_{NAN};
    double average_{NAN};
};

} // namespace Statistics
