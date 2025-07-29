#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/solution.hpp"

TEST_CASE("Suma de pares") {
    REQUIRE(sum_even({1, 2, 3, 4, 5, 6}) == 12);
    REQUIRE(sum_even({1, 3, 5}) == 0);
    REQUIRE(sum_even({2, -2, 4}) == 4);
    REQUIRE(sum_even({}) == 0);
}
