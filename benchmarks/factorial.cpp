#include <benchmark/benchmark.h>

#include "../src/factorial/factorial.hpp"

static void BM_Factorial(benchmark::State& state) {
    unsigned int n = state.range(0);
    for (auto _ : state) {
        benchmark::DoNotOptimize(TddMath::factorial(n));
    }
}

BENCHMARK(BM_Factorial)->Arg(5)->Arg(10)->Arg(15)->Arg(20);

BENCHMARK_MAIN();
