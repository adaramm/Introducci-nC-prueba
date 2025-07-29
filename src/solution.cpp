#include "solution.hpp"

int sum_even(const std::vector<int>& nums) {
    int sum = 0;
    for (int n : nums) {
        if (n % 2 == 0) sum += n;
    }
    return sum;
}
