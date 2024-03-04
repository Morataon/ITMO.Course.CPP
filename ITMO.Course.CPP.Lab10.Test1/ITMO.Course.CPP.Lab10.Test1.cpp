#include <iostream>
#include "triangle_comp.h"
#include "triangle_agr.h"
#include "dot.h"
using namespace std;
int main() {
	Dot d1 = Dot(2, 3);
	Dot d2 = Dot(3, 5);
	Dot d3 = Dot();
	//Композиция
	Triangle_comp T1(d1, d2, d3);
	T1.showSideLength();
	cout << "Square=" << T1.calcSqure() << endl;
	cout << "Perimeter=" << T1.calcPerim() << endl;
	Triangle_comp T2(2, 3, 3, 5, 0, 0);
	T2.showSideLength();
	cout << "Square=" << T2.calcSqure() << endl;
	cout << "Perimeter=" << T2.calcPerim() << endl;
	//Агрегация
	Dot d4 = Dot(2, 3);
	Dot d5 = Dot(3, 5);
	Dot d6 = Dot();
	Triangle_agr T3(d4, d5, d6);
	T1.showSideLength();
	cout << "Square=" << T3.calcSqure() << endl;
	cout << "Perimeter=" << T3.calcPerim() << endl;
}