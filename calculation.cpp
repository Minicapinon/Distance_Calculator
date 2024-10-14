#ifndef CALCULATION
#include <cmath>

double operation(double x1,double x2,double y1,double y2)
{
    double distance = 0;

    distance = ((x2-x1)*(x2-x1)+(y2-y1)(y2-y1));

    distance = sqrt(distance);

    return distance;
}

#endif //CALCULATION
