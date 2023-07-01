#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Factorial sequence is computed", "[factorial]") {
    REQUIRE(get_factorial_sequence(3) == "1x2x3=6");
    REQUIRE(get_factorial_sequence(4) == "1x2x3x4=24");
    REQUIRE(get_factorial_sequence(5) == "1x2x3x4x5=120");
    REQUIRE(get_factorial_sequence(6) == "1x2x3x4x5x6=720");
}
