
/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Shani Cohen>
 *
 * Date: 11-03-2021
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
//using namespace string;
/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
 
 /*
string nospaces(string input) {
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
    return input;
}
*/
/*
TEST_CASE("Good snowman code") {    
                     
            CHECK(nospaces(snowman(11114411)) == nospaces("===\n (.,.) \n ( : ) \n ( : ) "));
            CHECK(nospaces(snowman(11114412)) == nospaces("===\n(.,.)\n( : )\n (\" \") "));
            CHECK(nospaces(snowman(33232124)) == nospaces("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
            CHECK(nospaces(snowman(33232123)) == nospaces("   _   \n  /\\  \n\\(o_O) \n (] [)>\n (__) "));
            CHECK(nospaces(snowman(43232121)) == nospaces("  _  \n (*) \n\\(o_O) \n (] [)>\n ( : ) "));
}
*/
					/*Bed snowman code:*/ 
					
TEST_CASE("Snowman code that Out of Range") { 
                    
            CHECK_THROWS(snowman(51114411));
            CHECK_THROWS(snowman(15134561));
            CHECK_THROWS(snowman(12415124));
            CHECK_THROWS(snowman(14567523));
            CHECK_THROWS(snowman(12411152));
            CHECK_THROWS(snowman(12411125));
}

/* more test cases here */

TEST_CASE("Short snowman code") {     
                 
            CHECK_THROWS(snowman(1));
            CHECK_THROWS(snowman(5));
            CHECK_THROWS(snowman(272));
            CHECK_THROWS(snowman(2322));
            CHECK_THROWS(snowman(121232));
            CHECK_THROWS(snowman(12334233));
            CHECK_THROWS(snowman(234));
}

TEST_CASE("Long snowman code") {   
                
            CHECK_THROWS(snowman(1234321234));
            CHECK_THROWS(snowman(1234354667));
			CHECK_THROWS(snowman(00000000000));
            CHECK_THROWS(snowman(1111111111));
}

TEST_CASE("Snowman code with Zero") {  
                    
            CHECK_THROWS(snowman(0));
			CHECK_THROWS(snowman(00));
}

TEST_CASE("Snowman code with negative case") {                    
        
            CHECK_THROWS(snowman(-1));
            CHECK_THROWS(snowman(-000));
            CHECK_THROWS(snowman(-44));
			CHECK_THROWS(snowman(-12312312));
            CHECK_THROWS(snowman(-33));

}