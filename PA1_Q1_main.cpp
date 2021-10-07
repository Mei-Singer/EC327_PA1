#include <iostream>
#include <math.h>
#include "PA1_Q1.h"
using namespace std;

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