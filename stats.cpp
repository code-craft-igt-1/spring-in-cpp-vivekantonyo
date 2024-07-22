#include "stats.h"

using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<double>& sensorStats)
{
	Stats stats;
	if (sensorStats.empty())
	{
		stats.average = std::numeric_limits<float>::quiet_NaN();
		stats.max = std::numeric_limits<float>::quiet_NaN();
		stats.min = std::numeric_limits<float>::quiet_NaN();
	}
	else
	{
		stats.average = (float)(std::accumulate(sensorStats.begin(), sensorStats.end(), 0.0)) / sensorStats.size();
		auto maxValue = max_element(sensorStats.begin(), sensorStats.end());
		stats.max = *maxValue;
		auto minValue = min_element(sensorStats.begin(), sensorStats.end());
		stats.min = *minValue;
	}
	return stats;
}
