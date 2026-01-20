#include "Point.h"
class Line{
private:
    Point starting;
    Point ending;
public:
    Line(Point p1, Point p2);
    double length();
    double Slope();
    bool onLine(Point p1);
    Point midPoint();
    Line extendedLine (Point p1,Point p2);
    // double getYintercept();
};