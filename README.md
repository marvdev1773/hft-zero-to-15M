# hft-zero-to-15M (by marvdev1773)

Public latency/low-latency C++ portfolio built from zero. Every commit includes runnable code, real numbers, and a short explanation I can defend in interviews.

---

## Day 1 — Single load latency (macOS, Apple Silicon)

**Hardware:** MacBook Air M2  
**OS:** macOS  
**Compiler:** Apple clang (`clang++`)  
**Timer:** `std::chrono::high_resolution_clock` (baseline only)

### Build
```bash
make clean && make


#RUN
./latency_day1 > result.txt
cat result.txt


