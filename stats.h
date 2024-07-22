#include <numeric>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats
    {
        double average;
        double min;
        double max;
    };

    Stats ComputeStatistics(const std::vector<double>& );
}
