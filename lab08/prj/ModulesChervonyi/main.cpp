#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

float s_calculation(float x, float y, float z)
{
    float s;
    s = log(x - y)+sqrt((M_PI * pow(x, 2))/(x + (z/2 * pow(y,2))));
    return roundf(s * 100000.0f) / 100000.0f;
}
