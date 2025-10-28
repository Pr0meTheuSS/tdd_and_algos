#include "../src/fibonacci/fibonacci.hpp"

#include <benchmark/benchmark.h>

static void BM_Fibonacci(benchmark::State& state) {
    unsigned int n = state.range(0);
    for (auto _ : state) {
        benchmark::DoNotOptimize(TddMath::fibonacci(n));
    }
}

BENCHMARK(BM_Fibonacci)->Arg(5)->Arg(10)->Arg(15)->Arg(20)->Arg(25);

// TODO: add cache
// BENCHMARK(BM_Fibonacci)->Arg(100)->Arg(1000);
