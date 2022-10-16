#include "benchmark/benchmark.h"
#include "day_4.h"

static void DISABLED_BM_GridChallenge_case1(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    day4 d4;
    std::vector<std::string> v1{"eibjbwsp", "ptfxehaq", "jxipvfga", "rkefiyub",
                                "kalwfhfj", "lktajiaq", "srdgoros", "nflvjznh"};
    d4.gridChallenge(v1);
  }
}
BENCHMARK(DISABLED_BM_GridChallenge_case1);

static void DISABLED_BM_GridChallenge_case2(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    day4 d4;
    d4.executeGridChallenge();
  }
}
BENCHMARK(DISABLED_BM_GridChallenge_case2);

static void DISABLED_BM_GridChallenge_case3(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    day4 d4;

    std::vector<std::string> v1{
        "wzxzwxzyzzwzyyzwzzxzyxzyzzwwyzzyzjxyxzzzyyzyyyzzzxzzzzyjzyyyzzzxyzzzyz"
        "yzwyzyyzzzzzzxyzyyyyxzxxzyxwz",
        "zzzzzzzzuxxzzzzzzzzzzzxwzzzzzzxxzzzzyyzxxzzzxzzxzzzzzzzzzxzzzzzzzzzwxw"
        "zzzzzzxwzzzyxzzzzzzzyzzzzxzxu",
        "zzzzzzyzzzzzyyzzzzzzzzzyzzzzzyyzzzzzyyzzzzzzyzyzzyzyzzzzzyyzzzyyyyyzyz"
        "yzzzzzzzzyzzzzzzzyzzzzzzzyyzz",
        "zyyyyyzzzzzyzzyyyzyyzzzyzzzzyzzzzzzyzzzzzzyyzzyzyzyzzzzzyzzzzzzyzzzzzz"
        "zzzzzzyzzzzzzzzzzzzyzzzzzzzyy",
        "yzzzzyzyzyzyyzzzzzyzzyzzzzzzzzzzzyzzyzzzzzyzzyzzzzzzyzzyzyzzzzzzzyzzzz"
        "yzzzzzzzzzzzzzzzzzzzzyzzyzzzz",
        "zzzzzzzzzyzzyzzyzzzzyzzyzzzzzzzyyzzzyzyzzzzzzzzyyzzyzzzzzyyzzzzzzzzzzy"
        "zzzzyzzzzzyzzzzzzyzzzzzzyzzzz",
        "zzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzyzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzyzzzzzzzzzzzzzzzz"
        "zzzzzzzyzzzzzzzzzzzzzzzzzzzzz",
        "zzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzyzzzzzzzzzyzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzyzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzyzzzzzzzzyzzzzzzzzzzzzz",
        "zzzzzzzzyzyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzyzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
        "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    d4.gridChallenge(v1);
  }
}
BENCHMARK(DISABLED_BM_GridChallenge_case3);

static void DISABLED_BM_SuperDigit_case7(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    day4 d4;
    d4.executeSuperDigit();
  }
}
BENCHMARK(DISABLED_BM_SuperDigit_case7);

static void DISABLED_BM_minimumBribe_case2(benchmark::State &state) {

  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    day4 d4;
    d4.excecuteMinimumBribes();
  }
}
BENCHMARK(DISABLED_BM_minimumBribe_case2);
