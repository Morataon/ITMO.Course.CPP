#include <iostream>
using namespace std;

struct QERoots
{
	double root1, root2;
	void ShowRoots()
	{
		cout << "x1= " << root1 << ", x2= " << root2 << endl;
	}
};

QERoots QESolve(double a, double b, double c) {
	QERoots r;
	double d;
	d = b * b - 4 * a * c;
	if (d >= 0) {
		r.root1 = (-b + sqrt(d)) / (2 * a);
		r.root2 = (-b - sqrt(d)) / (2 * a);
	}

	else {
		r.root1 = d;
		r.root2 = d;

	}

	return r;

}

int main() {
	QERoots r;
	double a, b, c;
	cout << "Input the quadratic equation coefficients a,b,c for equation like a*x*x+b*x+c=0.\n";
	cout << "Please, enter a ";
	cin >> a;
	cout << "Please, enter b ";
	cin >> b;
	cout << "Please, enter c ";
	cin >> c;
	r = QESolve(a, b, c);
	if ((r.root1 == b * b - 4 * a * c) && (r.root2 == r.root1))
		cout << "There are no roots for entered quadratic equation coefficients " << endl;
	else
		r.ShowRoots();
	return 0;
}