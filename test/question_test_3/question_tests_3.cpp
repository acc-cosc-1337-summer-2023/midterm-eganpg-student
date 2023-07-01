#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("decimal_to_binary") {
    REQUIRE(decimal_to_binary(10) == "00001010");
    REQUIRE(decimal_to_binary(170) == "10101010");
    REQUIRE(decimal_to_binary(255) == "11111111");
}