#include <string.h>
#include <iostream>
#include <iomanip>
#pragma once
using namespace std;
class Point
{
private:
    double x_axis;
    double y_axis;
public:
    Point(const double xLoc, const double yLoc);
    double getXloc();
    double getYloc();
    string stringWrap();
};
