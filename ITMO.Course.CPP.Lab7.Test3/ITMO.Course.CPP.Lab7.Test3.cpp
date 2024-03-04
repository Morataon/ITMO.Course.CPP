#include <iostream>
#include <tuple>
using namespace std;
using Tuple = tuple<bool, double, double>;

Tuple QESolve(double a, double b, double c) {
	double d, x1, x2;
	bool r = false;
	d = b * b - 4 * a * c;
	if (d >= 0) {
		r = true;
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	}
	return make_tuple(r, x1, x2);
}

int main() {
	Tuple solve;
	double a, b, c;
	cout << "Input the quadratic equation coefficients a,b,c for equation like a*x*x+b*x+c=0.\n";
	cout << "Please, enter a ";
	cin >> a;
	cout << "Please, enter b ";
	cin >> b;
	cout << "Please, enter c ";
	cin >> c;
	solve = QESolve(a, b, c);
	if (get<0>(solve))
		cout << "x1= " << get<1>(solve) << ", x2= " << get<2>(solve) << endl;
	else
		cout << "There are no roots for entered quadratic equation coefficients " << endl;
	return 0;
}