#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "элемента массива[" << i << "]=";
		cin >> mas[i];
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << "сумма= " << s << endl;
	float avg = s / n;
	cout.precision(5);
	cout << "среднее значение= " << avg << endl;
	return 0;
}