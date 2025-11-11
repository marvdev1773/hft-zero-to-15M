all: latency_day1
latency_day1: main.cpp
	clang++ -O3 -march=native -std=c++20 -o latency_day1 main.cpp
clean:
	rm -f latency_day1
