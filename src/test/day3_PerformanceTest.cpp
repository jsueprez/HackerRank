#include "benchmark/benchmark.h"
#include "day_3.h"

static void BM_zigZagSequence(benchmark::State &state)
{

  // Perform setup here
  for (auto _ : state)
  {
    // This code gets timed
    executeZigzagSequence();
  }
}
BENCHMARK(BM_zigZagSequence);

static void BM_towerBreakers(benchmark::State &state)
{

  // Perform setup here
  for (auto _ : state)
  {
    // This code gets timed
    executeToweBreakers();
  }
}
BENCHMARK(BM_towerBreakers);

static void BM_caesarCipher(benchmark::State &state)
{

  // Perform setup here
  for (auto _ : state)
  {
    // This code gets timed
    executeCaesarCipher();
  }
}
BENCHMARK(BM_caesarCipher);

static void BM_palindromeIndex(benchmark::State &state)
{

  // Perform setup here
  for (auto _ : state)
  {
    // This code gets timed
    executePalindromeIndex();
  }
}
BENCHMARK(BM_palindromeIndex);
