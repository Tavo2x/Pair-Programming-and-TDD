#include <iostream>
#include "Point.h"
#define CATCH_CONFIG_NO_POSIX_SIGNALS
// #define CATCH_CONFIG_MAIN   
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
using namespace std;

int main(){
	Catch :: Session().run();

	return 0;
}

//--
TEST_CASE("Test Case 1")
{ 
	SECTION("Base Test")
	{
		Point p1(1.2,3.4);
		REQUIRE(p1.getXloc() == 1.2);
		REQUIRE(p1.getYloc() == 3.4);


		// REQUIRE(p1.stringWrap = "X:1.2, Y:3.4");
	}
}