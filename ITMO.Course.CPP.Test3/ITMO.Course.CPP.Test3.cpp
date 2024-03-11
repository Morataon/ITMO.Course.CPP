#include <iostream>

class Point {
private:
    int x, y;

public:
    // Конструктор с параметрами по умолчанию
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    // Перегрузка оператора сложения для двух объектов Point
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    // Перегрузка оператора +=
    Point& operator+=(const Point& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    // Перегрузка оператора сложения для Point и int
    Point operator+(int value) const {
        return Point(x + value, y + value);
    }

    // Метод для вывода координат точки
    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point pt1(1, 1), pt2(2, 2), pt3;
    pt3 = pt1 + pt2;
    pt3.print(); // Выведет (3, 3)

    pt2 += pt1;
    pt2.print(); // Выведет (3, 3)

    pt3 = pt1 + 5;
    pt3.print(); // Выведет (6, 6)

    return 0;
}
