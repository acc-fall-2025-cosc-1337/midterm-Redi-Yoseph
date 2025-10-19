#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Kinetic energy calculation")
{
    REQUIRE(get_kinetic_energy_do(10, 9) == Approx(405.0));
    REQUIRE(get_kinetic_energy_do(20, 5) == Approx(250.0));
    REQUIRE(get_kinetic_energy_do(30, 7) == Approx(735.0));
}
