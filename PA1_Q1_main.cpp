#include <iostream>
#include <math.h>
#include "PA1_Q1.h"
using namespace std;

//Function prototypes
double slope(double x1, double y1, double x2, double y2);
double yIntercept (double x1, double y1, double m);
double perpSlope(double m);
double perpInt (double x3, double y3, double perpM);
double intersectx (double m, double yInt, double perpM, double perpYInt);
double intersecty (double m, double x, double yInt);
double dist(double x, double y, double x3, double y3);

int main()
{
        //Prompt user to enter three pairs of x,y coordinates
        double x1, y1, x2, y2, x3, y3, x, y;
        double m, perpM, perpYInt, yInt;
        cout << "Enter three x,y coordinates: " << endl;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        //Invoke slope function
        slope(x1, y1, x2, y2);

        //Invoke yIntercept function
        yIntercept(x1, y1, m);

        //Invoke perpSlope function
        perpSlope (m);

        //Invoke perpInt function
        perpInt(x3, y3, perpM);

        //Invoke intersectx function
        intersectx(m, yInt, perpM, perpYInt);

        //Invoke intersecty function
        intersecty(m, x, yInt);

        //Invoke distance function
        cout << "The shortest distance for (" << x3 << "," << y3 << ") ";
        cout << "to the line composed of (" << x1 << "," << y1 << ") ";
        cout << "and (" << x2 << "," << y2 << ") is " << dist(x, y, x3, y3) << endl;

        return 0;
}
