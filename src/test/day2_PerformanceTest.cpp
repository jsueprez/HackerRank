#include "benchmark/benchmark.h"
#include "day_2.h"

static void DISABLED_BM_lonelyInteger(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeLonelyInteger();
  }
}
BENCHMARK(DISABLED_BM_lonelyInteger);

static void DISABLED_BM_diagonalDifference(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeDiagonalDifference();
  }
}
BENCHMARK(DISABLED_BM_diagonalDifference);

static void DISABLED_BM_countingSort(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeCountingSort();
  }
}
BENCHMARK(DISABLED_BM_countingSort);

static void DISABLED_BM_flippingMatrix(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeFlippingMatrix();
  }
}
BENCHMARK(DISABLED_BM_flippingMatrix);
