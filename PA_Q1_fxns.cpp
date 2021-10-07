#include <iostream>
#include <math.h>
using namespace std;

//Slope function
double slope(double x1, double y1, double x2, double y2)
{
        double m = 0;
        double rise = y2 - y1;
        double run = x2 - x1;
        m = rise/run;
        return m;
}

//yIntercept function
double yIntercept(double x1, double y1, double m)
{
        double yInt = 0;
        yInt = (y1 - (m * x1));
        return yInt;
}

//Find the perpendicular slope
double perpSlope(double m)
{
        double perpM = (-1 / m);
        return perpM;
}

//Find perpendicular y-intercept
double perpInt (double x3, double y3, double perpM)
{
        double perpYInt = (y3-(perpM * x3));
        return perpYInt;
}

//Find x coordinate of intersection
double intersectx (double m, double yInt, double perpM, double perpYInt)
{
        double x = (perpYInt - yInt) / (m - perpM);
        return x;
}

//Find y coordinate of intersection
double intersecty (double m, double x, double yInt)
{
        double y = ((m * x) + yInt);
        return y;
}


//Distance from a point to a line function
double dist(double x, double y, double x3, double y3)
{
        double D = sqrt(((x - x3) * (x - x3)) + ((y - y3) * (y - y3)));
        return D;
}
