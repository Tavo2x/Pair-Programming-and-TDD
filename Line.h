#include "Point.h"
class Line{
private:
    double pointOne;
    double pointTwo;
public:
    Line(Point p1, Point p2);
    double length(Point p1 , Point p2);
    double Slope(Point p1, Point p2);
};