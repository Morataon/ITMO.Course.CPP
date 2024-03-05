﻿#include<iostream>
#include<windows.h>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	// конструктор по умолчанию
	Distance() : feet(0), inches(0.0) { }
	// конструктор с двумя параметрами
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getdist()
	{
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist)
	{
		out << dist.feet << "\' - " << dist.inches << "\'\n";
		return out;
	}
	Distance operator+ (const Distance& d2) const
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
	Distance operator- (const Distance& d2) const
	{
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i < 0)
		{
			i += 12.0;
			f--;
		}
		if (f < 0) {
			f = 0;
			i = 0;
		}

		return Distance(f, i);
	}
};

int main() {
	SetConsoleOutputCP(1251);
	Distance dist1, dist2, dist3, dist4;
	dist1.getdist();
	dist2.getdist();
	dist3 = dist1 - dist2;
	dist4 = dist1 + dist2 + dist3;
	cout << "\ndist1 = " << dist1;
	return 0;
}