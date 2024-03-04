#pragma once
#include "dot.h"
#include <math.h>
#include <iostream>
class Triangle_agr //Агрегация
{
public:
    Dot a;
    Dot b;
    Dot c;
    Triangle_agr(const Dot&, const Dot&, const Dot&);

    void showSideLength();
    double calcPerim();
    double calcSqure();

};