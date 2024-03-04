#include "dot.h"
#include "triangle_comp.h"
Triangle_comp::Triangle_comp(double xa, double ya, double xb, double yb, double xc, double yc)
{
    a = Dot(xa, ya);
    b = Dot(xb, yb);
    c = Dot(xc, yc);
}
Triangle_comp::Triangle_comp(Dot pa, Dot pb, Dot pc)
{
    a = pa;
    b = pb;
    c = pc;
}

double Triangle_comp::calcPerim()
{
    double ab, bc, ac;
    ab = a.distanceTo(b);
    bc = b.distanceTo(c);
    ac = a.distanceTo(c);
    return ab + ac + bc;
}
double Triangle_comp::calcSqure()
{
    double p;
    p = calcPerim() / 2;
    return sqrt(p * (p - a.distanceTo(b)) * (p - b.distanceTo(c)) * (p - a.distanceTo(c)));
}



void Triangle_comp::showSideLength() {
    std::cout << "First side length is " << a.distanceTo(b) << "\n";
    std::cout << "Second side length is " << a.distanceTo(c) << "\n";
    std::cout << "Third side length is " << b.distanceTo(c) << std::endl;
}
