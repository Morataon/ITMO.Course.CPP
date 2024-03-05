#include<iostream>
#include<windows.h>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:
	// конструктор по умолчанию
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	// конструктор с двум¤ параметрами
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	void getdist()
	{
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet - feet); // остаток - это дюймы
	}
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
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
	friend Distance operator+ (Distance& d, float d1);
	friend Distance operator+ (float d1, Distance& d);
};

Distance operator+ (Distance& d, float d1)
{
	int f = d.feet + int(d1);
	float i = d.inches + (d1 - int(d1)) * 12;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}
Distance operator+ (float d1, Distance& d)
{
	return d + d1;
}

int main() {
	SetConsoleOutputCP(1251);
	Distance dist1 = 2.35F;
	Distance dist2 = dist1;
	float mtrs;
	mtrs = (float)dist1;
	cout << "\ndist1 = " << dist1;
	mtrs = dist2;
	cout << "\ndist2 = " << dist2;
	Distance dist3;
	dist3.getdist();
	cout << "\ndist3 = " << (2.5F + dist3);
	cout << "\ndist3 = " << (dist3 + 2.5F);
	return 0;
}