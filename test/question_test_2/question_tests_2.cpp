#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Time Functions") {
    REQUIRE(get_hours(1570846218) == 2);
    REQUIRE(get_minutes(1570846218) == 10);
    REQUIRE(get_seconds(1570846218) == 18);

    REQUIRE(get_hours(1570875018) == 10);
    REQUIRE(get_minutes(1570875018) == 10);
    REQUIRE(get_seconds(1570875018) == 18);
}