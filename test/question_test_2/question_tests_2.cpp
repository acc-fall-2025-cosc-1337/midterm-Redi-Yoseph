#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("factorial values")
{
    REQUIRE(get_factorial_sequence(3) == 6);
    REQUIRE(get_factorial_sequence(4) == 24);
    REQUIRE(get_factorial_sequence(5) == 120);
    REQUIRE(get_factorial_sequence(6) == 720);
}
