#include <iostream>
#include "Point.h"
#include "Line.h"
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
		REQUIRE(p1.stringWrap() == "X:1.2, Y:3.4");
	}
	SECTION("LINE TEST")
	{
		Point p1(1.2,3.4);
		Point p2(5.6,7.8);
		Line L1 (p1,p2);

		REQUIRE(L1.length(p1,p2) == 6.2);
		// REQUIRE(L1.getSlope() == 1);
		// REQUIRE(L1.onLine(0,100) == false);
		// REQUIRE(L1.onLine(p1) == true);


	}
}