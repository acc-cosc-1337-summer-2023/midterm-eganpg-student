#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
// include testing framework and header to reference functions for testing

#include "catch.hpp"
#include "question1.h"


// define the test case

TEST_CASE("Test the ingredient function to ensure correct proportions")
{
	// define the ingredient values for each ingredient
	vector<double> expected_result = {1.5, 1, 2.75};
	
	// using test framework call the function and pass desired number of cookies. Results should match test case
	REQUIRE(get_cookie_ingredients(48) == expected_result);

	// Test again for other variations
	expected_result = {3, 2, 5.5};
	REQUIRE(get_cookie_ingredients(96) == expected_result);
	expected_result = {0.75, 0.5, 1.375};
	REQUIRE(get_cookie_ingredients(24) == expected_result);

	// 
}
