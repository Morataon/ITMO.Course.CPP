#include "dot.h"
#include "triangle_agr.h"
Triangle_agr::Triangle_agr(const Dot& pa, const Dot& pb, const Dot& pc)
{
    a = pa;
    b = pb;
    c = pc;
}

double Triangle_agr::calcPerim()
{
    double ab, bc, ac;
    ab = a.distanceTo(b);
    bc = b.distanceTo(c);
    ac = a.distanceTo(c);
    return ab + ac + bc;
}
double Triangle_agr::calcSqure()
{
    double p;
    p = calcPerim() / 2;
    return sqrt(p * (p - a.distanceTo(b)) * (p - b.distanceTo(c)) * (p - a.distanceTo(c)));
}



void Triangle_agr::showSideLength() {
    std::cout << "First side length is " << a.distanceTo(b) << "\n";
    std::cout << "Second side length is " << a.distanceTo(c) << "\n";
    std::cout << "Third side length is " << b.distanceTo(c) << std::endl;
}
