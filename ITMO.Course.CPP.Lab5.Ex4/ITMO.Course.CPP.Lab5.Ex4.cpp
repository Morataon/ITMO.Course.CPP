#include <iostream>
#include <windows.h>

using namespace std;
void show_array(const int Arr[], const int);
bool from_min(const int, const int);
bool from_max(const int, const int);
void bubble_sort(int Arr[], const int, bool (*compare)(int, int));
void input_array(int Arr[], const int);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	bool (*from_f[2])(int, int) = { from_min,from_max };
	int N;
	int my_choose = 0;
	cout << "Введите количество элементов массива\n";
	cin >> N;
	int* A = new int[N];
	input_array(A, N);
	cout << "1. Сортировать по возрастанию\n";
	cout << "2. Сортировать по убыванию\n";
	cin >> my_choose;
	cout << "Исходные данные: ";
	show_array(A, N);
	/*switch (my_choose)
	{
	case 1: bubble_sort(A, N, from_min); break;
	case 2: bubble_sort(A, N, from_max); break;
	default: cout << "\rНеизвестная операция ";
	}*/
	bubble_sort(A, N, (*from_f[my_choose - 1]));
	show_array(A, N);
	delete[] A;
	return 0;
}
void input_array(int Arr[], const int N) {

	for (int i = 0; i < N; i++)
	{
		cout << "Arr[" << i << "]=";
		cin >> Arr[i];
	}
}
void show_array(const int Arr[], const int N) {
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}
bool from_min(const int a, const int b)
{
	return a > b;
}
bool from_max(const int a, const int b)
{
	return a < b;
}
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
		}
	}
}