#include "Line.h"
#include <cmath>
Line :: Line(Point p1, Point p2){

}
double Line :: length(Point p1,Point p2){
    double length =  sqrt(pow(p2.getXloc() - p1.getXloc(),2) + pow(p2.getYloc() - p1.getYloc(),2));
    return length; 
}

double Line :: Slope(Point p1, Point p2){
    return p2.getYloc() - p1.getYloc() / p2.getXloc() - p1.getXloc();
}