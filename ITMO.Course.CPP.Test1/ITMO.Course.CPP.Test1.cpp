#include <iostream>

class A {
private:
    int* arr;
    int arrSize;

public:
    // Конструкторы
    A() : arr(nullptr), arrSize(0) {}
    A(int size) : arr(new int[size]), arrSize(size) {}
    A(const A& other) : arr(new int[other.arrSize]), arrSize(other.arrSize) {
        for (int i = 0; i < arrSize; ++i) {
            arr[i] = other.arr[i];
        }
    }

    // Деструктор
    ~A() {
        delete[] arr;
    }

    // Оператор присваивания
    A& operator=(const A& other) {
        if (this != &other) {
            delete[] arr;
            arrSize = other.arrSize;
            arr = new int[arrSize];
            for (int i = 0; i < arrSize; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }

    // Метод для получения размера массива
    int size() const {
        return arrSize;
    }

    // Операторы доступа к элементам массива
    int& operator[](int index) {
        return arr[index];
    }

    const int& operator[](int index) const {
        return arr[index];
    }
};

int main() {
    A a1;
    A a2(10);
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); ++i) {
        std::cout << a4[i] << " ";
    }
    return 0;
}
