#include "benchmark/benchmark.h"
#include "day_1.h"

static void BM_plusMinus(benchmark::State &state)
{

  // Perform setup here
  for (auto _ : state)
  {
    // This code gets timed
    executePlusMinus();
  }
}
BENCHMARK(BM_plusMinus);

static void BM_timeConversion(benchmark::State &state)
{

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        executeTimeConversion();
    }
}
BENCHMARK(BM_timeConversion);

static void BM_miniMax(benchmark::State &state)
{

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        executeMiniMax();
    }
}
BENCHMARK(BM_miniMax);

static void BM_findMedian(benchmark::State &state)
{

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        executeFindMedian();
    }
}
BENCHMARK(BM_findMedian);
