#include "benchmark/benchmark.h"
#include "day_5.h"

static void BM_Pairs_case1(benchmark::State &state) {

  // Perform setup here
  day_5 d5;
  for (auto _ : state) {
    // This code gets timed
    benchmark::DoNotOptimize(d5.ex1());
  }
  state.SetComplexityN(state.range(0));
}
BENCHMARK(BM_Pairs_case1)
    ->RangeMultiplier(2)
    ->Range(1 << 10, 1 << 18)
    ->Complexity(benchmark::oN);

static void BM_Pairs_case2(benchmark::State &state) {

  // Perform setup here
  day_5 d5;
  for (auto _ : state) {
    // This code gets timed
    benchmark::DoNotOptimize(d5.ex2());
  }
  state.SetComplexityN(state.range(0));
}
BENCHMARK(BM_Pairs_case2)
    ->RangeMultiplier(2)
    ->Range(1 << 10, 1 << 18)
    ->Complexity(benchmark::oN);