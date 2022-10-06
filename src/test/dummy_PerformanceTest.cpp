#include "benchmark/benchmark.h"
#include "dummyLib.h"
#include "plusMinus.h"
#include "timeConversion.h"

static void BM_dummySum(benchmark::State &state)
{
  DummyLib object;
  int i1 = 2;
  int i2 = 3;

  // Perform setup here
  for (auto _ : state)
  {
    // This code gets timed
    object.dummySum(i1, i2);
  }
}
BENCHMARK(BM_dummySum);

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
