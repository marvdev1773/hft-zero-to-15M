# hft-zero-to-15M (by marvdev1773)

Public latency/low-latency C++ portfolio built from zero. Every commit includes runnable code, real numbers, and a short explanation I can defend in interviews.

---

## Day 1 — L1 cache-line load latency (macOS, Apple Silicon)

**Hardware:** MacBook Air M2  
**OS:** macOS  
**Compiler:** Apple clang (`clang++`)  
**Timer:** `std::chrono::high_resolution_clock` (baseline only)

### Build & Run
```bash
# Build
make clean && make

# Run and show output
./latency_day1 > result.txt
cat result.txt

# Expected output from this machine:
# DAY 1 BASELINE - marvdev1773
# L1 cache-line load latency: 133 ns
# Hardware: MacBook Air M2



