#include "benchmark/benchmark.h"
#include "day_2.h"

static void BM_lonelyInteger(benchmark::State &state)
{

  // Perform setup here
  for (auto _ : state)
  {
    // This code gets timed
    executeLonelyInteger();
  }
}
BENCHMARK(BM_lonelyInteger);

static void BM_diagonalDifference(benchmark::State &state)
{

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        executeDiagonalDifference();
    }
}
BENCHMARK(BM_diagonalDifference);

static void BM_countingSort(benchmark::State &state)
{

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        executeCountingSort();
    }
}
BENCHMARK(BM_countingSort);

static void BM_flippingMatrix(benchmark::State &state)
{

    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        executeFlippingMatrix();
    }
}
BENCHMARK(BM_flippingMatrix);
