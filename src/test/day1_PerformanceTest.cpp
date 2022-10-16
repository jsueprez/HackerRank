#include "benchmark/benchmark.h"
#include "day_1.h"

static void DISABLED_BM_plusMinus(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executePlusMinus();
  }
  state.SetComplexityN(state.range(0));
}
BENCHMARK(DISABLED_BM_plusMinus)
    ->RangeMultiplier(2)
    ->Range(1 << 10, 1 << 18)
    ->Complexity(benchmark::oN);

static void DISABLED_BM_timeConversion(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeTimeConversion();
  }
  state.SetComplexityN(state.range(0));
}
BENCHMARK(DISABLED_BM_timeConversion)
    ->RangeMultiplier(2)
    ->Range(1 << 10, 1 << 18)
    ->Complexity([](benchmark::IterationCount n) -> double { return n; });

static void DISABLED_BM_miniMax(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeMiniMax();
  }
}
BENCHMARK(DISABLED_BM_miniMax);

static void DISABLED_BM_findMedian(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeFindMedian();
  }
}
BENCHMARK(DISABLED_BM_findMedian);
