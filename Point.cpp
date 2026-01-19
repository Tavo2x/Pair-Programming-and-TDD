#include "Point.h"
#include <sstream>
using namespace std;

Point::Point(const double xLoc, const double yLoc )
{
    x_axis = xLoc;
    y_axis = yLoc;
}

double Point :: getXloc()
{
    return x_axis;
}

double Point :: getYloc()
{
    return y_axis;
}
string Point :: stringWrap()
{
    stringstream xss;
    stringstream yss;
    int precision = 1;
    string retVal;
    xss << fixed << setprecision(precision) << getXloc();
    yss << fixed << setprecision(precision) << getYloc();
    string x = xss.str(); 
    string y = yss.str();
    retVal = "X:" + x + ", " + "Y:" + y; 
    return retVal;
}