#include "crypt.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Caesar cipher")
{
    SECTION("cipher")
    {
        REQUIRE(caesar_cipher("aabbcc", 2) == "ccddee");
        REQUIRE(caesar_cipher("z", 1) == "a");
    }

    SECTION("decipher")
    {
        REQUIRE(caesar_decipher("ccddee", 2) == "aabbcc");
    }
}