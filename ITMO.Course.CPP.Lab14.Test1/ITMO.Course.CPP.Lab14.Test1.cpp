#include <iostream>
#include <vector>

using namespace std;

	template<typename T>
	double avg(T arr, int n)
	{
		int index = 0; double avg_r = 0;
		while (index < n)
			avg_r += (double)arr[index++] / n;

		return avg_r;
	}

	int main()
	{
		int mas1[3] = {32, 121, 331};
		double mas2[3] = {2.612, 1.11, 121.35};
		long mas3[3] = {23123131313 , 3451231415110, 123163451313};
		char mas4[3] = {'v', 'i', 's'};

		cout << "Average of int array: " << avg(mas1, 5) << endl;
		cout << "Average of double array: " << avg(mas2, 5) << endl;
		cout << "Average of long array: " << avg(mas3, 5) << endl;
		cout << "Average of char array: " << avg(mas4, 5) << endl;
	}