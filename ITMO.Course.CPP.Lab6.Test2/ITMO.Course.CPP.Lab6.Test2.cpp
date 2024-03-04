#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	int min = 0;
	int buf = 0;
	ofstream output("mas.txt");
	for (int i : a) {
		output << i << " ";
	}
	output << "\n";
	for (int i = 0; i < N; i++)
	{
		min = i;
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	for (int i : a)
	{
		output << i << " ";
		cout << i << '\t';
	}
	output.close();
	return 0;
}