#include "Line.h"
#include <cmath>
Line :: Line(Point p1, Point p2)
: starting(p1.getXloc(),p1.getYloc()), ending(p2.getXloc(),p2.getYloc())
{
//-
}
double Line :: length(){
    double length =  sqrt(pow(ending.getXloc() - starting.getXloc(),2) + pow(ending.getYloc() - starting.getYloc(),2));
    return length; 
}
double Line :: Slope(){
    return (ending.getYloc() - starting.getYloc()) / (ending.getXloc() - starting.getXloc());
}
bool Line :: onLine(Point p1)
{
    bool retVal = false;
    Line new1(starting,p1);
    Line new2(ending, p1);
    double newLength = new1.length() + new2.length();
    if(newLength == length())
    {
        retVal = true;
    }
    return retVal;
}
Point Line :: midPoint(){
   double xMid = (starting.getXloc() + ending.getXloc()) / 2.0;
   double yMid = (starting.getYloc() + ending.getYloc()) / 2.0;
   Point midpoint(xMid,yMid);
   return midpoint;
}
Line Line :: extendedLine(double dis)
{
    double eX;
    double eY;
    eX = ending.getXloc() - starting.getXloc();
    eY = ending.getYloc() - starting.getYloc();
    double unitVec;
    unitVec = (eX/length(), eY/length());
    double newStartx = (starting.getXloc() - dis) * unitVec;
    double newStarty = (starting.getYloc() - dis )* unitVec;
    double newEndx = (ending.getXloc() - dis) * unitVec;
    double newEndy = (ending.getYloc() - dis )* unitVec;
    Point newStartPoint(newStartx,newStarty);
    Point newEndPoint(newEndx,newEndy);
    Line extendedLine (newStartPoint,newEndPoint);
    return extendedLine;
}
// double Line :: getYintercept()
// {
//    double yIntercept = p1.getYloc() - (Slope(p1,p2) * p1.getXloc());
//    return yIntercept;
// }