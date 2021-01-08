#include "../src/functions.h"

TEST_CASE("Sum are computed", "[sum]")
{
    Menu calculator = Menu();
    
    REQUIRE(5 == calculator.sum(3, 2));
    REQUIRE(33 == calculator.sum(31, 2));
    REQUIRE(0 == calculator.sum(0, 0));
    
}


TEST_CASE("Subtraction are computed", "[subtraction]")
{
    Menu calculator = Menu();
    
    REQUIRE(1 == calculator.subtraction(3, 2));
    REQUIRE(8 == calculator.subtraction(89, 81));
    REQUIRE(93 == calculator.subtraction(100, 7));
}

TEST_CASE("Multiplication are computed", "[multiplication]")
{
    Menu calculator = Menu();

    REQUIRE(210 == calculator.multiplication(35, 6));
    REQUIRE(100 == calculator.multiplication(25, 4));
    REQUIRE(21 == calculator.multiplication(7, 3));
}

TEST_CASE("Division are computed", "[division]")
{
    Menu calculator = Menu();
    
    REQUIRE(150 == calculator.division(300, 2));
    REQUIRE(1 == calculator.division(2, 2));
    REQUIRE(14 == calculator.division(29, 2));
}

TEST_CASE("Powers are computed", "[powerOfNumber]")
{
    Menu calculator = Menu();
    
    REQUIRE(9 == calculator.powerOfNumber(3, 2));
    REQUIRE(256 == calculator.powerOfNumber(2, 8));
    REQUIRE(3125 == calculator.powerOfNumber(5, 5));
}



