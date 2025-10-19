#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("get_cookie_ingredients base 48")
{
    auto v = get_cookie_ingredients(48);
    REQUIRE(v[0] == Approx(1.5));
    REQUIRE(v[1] == Approx(1.0));
    REQUIRE(v[2] == Approx(2.75));
}

TEST_CASE("get_cookie_ingredients scaled 96")
{
    auto v = get_cookie_ingredients(96);
    REQUIRE(v[0] == Approx(3.0));
    REQUIRE(v[1] == Approx(2.0));
    REQUIRE(v[2] == Approx(5.5));
}

TEST_CASE("get_cookie_ingredients scaled 24")
{
    auto v = get_cookie_ingredients(24);
    REQUIRE(v[0] == Approx(0.75));
    REQUIRE(v[1] == Approx(0.5));
    REQUIRE(v[2] == Approx(1.375));
}
