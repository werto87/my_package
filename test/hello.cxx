#include "my_package/hello.hxx"
#include <catch2/catch.hpp>

TEST_CASE ("hello", "[hello]") { REQUIRE (helloWorld () == "Hello World!"); }