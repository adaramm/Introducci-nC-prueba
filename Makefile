CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

all: test_sum_even

test_sum_even: tests/test_sum_even.cpp src/solution.cpp
	$(CXX) $(CXXFLAGS) -o test_sum_even tests/test_sum_even.cpp src/solution.cpp
