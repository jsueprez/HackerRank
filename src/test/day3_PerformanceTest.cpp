#include "benchmark/benchmark.h"
#include "day_3.h"

static void DISABLED_BM_zigZagSequence(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeZigzagSequence();
  }
}
BENCHMARK(DISABLED_BM_zigZagSequence);

static void DISABLED_BM_towerBreakers(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeToweBreakers();
  }
}
BENCHMARK(DISABLED_BM_towerBreakers);

static void DISABLED_BM_caesarCipher(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executeCaesarCipher();
  }
}
BENCHMARK(DISABLED_BM_caesarCipher);

static void DISABLED_BM_palindromeIndex(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    executePalindromeIndex();
  }
}
BENCHMARK(DISABLED_BM_palindromeIndex);
