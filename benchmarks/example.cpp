#include <benchmark/benchmark.h>

#include "../src/factorial/factorial.hpp"

static void BM_Factorial(benchmark::State& state) {
    unsigned int n = state.range(0);
    for (auto _ : state) {
        benchmark::DoNotOptimize(TddMath::factorial(n));
    }
}

BENCHMARK(BM_Factorial)->Arg(10)->Arg(15)->Arg(20)->Arg(30)->Arg(50);

BENCHMARK_MAIN();
