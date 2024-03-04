#pragma once
#include "dot.h"
#include <math.h>
#include <iostream>
class Triangle_comp //Композиция
{
public:
    Dot a;
    Dot b;
    Dot c;

    Triangle_comp(double, double, double, double, double, double);
    Triangle_comp(Dot, Dot, Dot);
    void showSideLength();
    double calcPerim();
    double calcSqure();

};