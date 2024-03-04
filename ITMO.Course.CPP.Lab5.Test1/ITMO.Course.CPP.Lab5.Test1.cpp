#include <iostream>
#include <windows.h>

using namespace std;
int array_sum(const int Arr[], const int);
double array_avg(const int Arr[], const int);
int array_sum_pos(const int Arr[], const int);
int array_sum_neg(const int Arr[], const int);
int array_sum_even_id(const int Arr[], const int);
int array_sum_odd_id(const int Arr[], const int);
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}
	cout << "sum= " << array_sum(mas, n) << endl;
	cout.precision(5);
	cout << "avarage value= " << array_avg(mas, n) << endl;
	cout << "Sum of negative array elements= " << array_sum_neg(mas, n) << endl;
	cout << "Sum of positive array elements= " << array_sum_pos(mas, n) << endl;
	cout << "Sum of array elements with even indecies = " << array_sum_even_id(mas, n) << endl;
	cout << "Sum of array elements with odd indecies = " << array_sum_odd_id(mas, n) << endl;
	return 0;
}
int array_sum(const int Arr[], const int N) {
	int s = 0;
	for (int i = 0; i < N; i++)
	{
		s += Arr[i];
	}
	return s;
}
double array_avg(const int Arr[], const int N) {
	return array_sum(Arr, N) / double(N);
}
int array_sum_neg(const int Arr[], const int N) {
	int s = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] < 0) s += Arr[i];
	}
	return s;
}
int array_sum_pos(const int Arr[], const int N) {
	int s = 0;
	for (int i = 0; i < N; i++)
	{
		if (Arr[i] > 0) s += Arr[i];
	}
	return s;
}int array_sum_even_id(const int Arr[], const int N) {
	int s = 0;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0) s += Arr[i];
	}
	return s;
}
int array_sum_odd_id(const int Arr[], const int N) {
	int s = 0;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 != 0) s += Arr[i];
	}
	return s;
}