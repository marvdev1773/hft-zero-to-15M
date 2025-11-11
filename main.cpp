#include <iostream>
#include <chrono>
#include <thread>
#include <stdint.h>

int main() {
    std::this_thread::sleep_for(std::chrono::microseconds(10));
    volatile uint64_t sink = 0;
    for (int i = 0; i < 1'000'000; ++i) sink += i;
    auto start = std::chrono::high_resolution_clock::now();
    uint64_t* ptr = new uint64_t(0xDEADBEEF1337C0DE);
    asm volatile ("" ::: "memory");
    uint64_t value = *ptr;
    sink += value;
    auto end = std::chrono::high_resolution_clock::now();
    auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "DAY 1 BASELINE - marvdev1773\n";
    std::cout << "L1 cache-line load latency: " << ns << " ns\n";
    std::cout << "Hardware: MacBook Air M2\n";
    delete ptr;
    return 0;
}
