#pragma once
#include "Point.h"

Point::Point(double xLoc, double yLoc )
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