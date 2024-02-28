#include <iostream>
#include <windows.h>

using namespace std;
bool Input(int& x, int& y) {
	cout << "Input a (a>=0)";
	cin >> x;
	cout << "Input b (b>=0)";
	cin >> y;
	if (x < 0 || y < 0) return false;
	else return true;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error" << endl;
		return 1;
	}
	int s = a + b;
	cout << "s= " << s << endl;
	return 0;
}