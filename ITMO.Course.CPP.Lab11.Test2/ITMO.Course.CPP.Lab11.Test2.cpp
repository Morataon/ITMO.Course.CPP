#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки
class Point
{
public:
	int x;
	int y;

	Point operator+= (const Point& pt) // функция-член класса
	{
		x += pt.x;
		y += pt.y;
		return *this;
	}

	Point() : x(0), y(0) {}
	Point(int xi, int yi) : x(xi), y(yi) {}

	float distance() const {
		return sqrt(x * x + y * y);
	}

	bool operator< (const Point& pt) const {
		return (this->distance() < pt.distance()) ? true : false;
	}

	friend std::ostream& operator<< (std::ostream&, const Point&);
};
std::ostream& operator<< (std::ostream& out, const Point& p)
{
	out << "Point(" << p.x << ", " << p.y << ")";
	return out;
}


int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
	for (auto& Point : v)
		std::cout << Point << '\n'; // требуется перегрузка оператора << для // класса Point
	return 0;
}