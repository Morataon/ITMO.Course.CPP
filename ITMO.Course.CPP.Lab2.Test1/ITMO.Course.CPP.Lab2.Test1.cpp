#include <iostream>
#include <cmath>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
        int number;
        std::cout << "Введите число: ";
        std::cin >> number;

        if (number < 3) {
            std::cout << number << " - не является суперпростым числом\n";
            return 0;
        }

        // Проверка простоты числа
        bool isPrime = true;
        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        // Если число не простое, выводим результат и завершаем программу
        if (!isPrime) {
            std::cout << number << " - не является суперпростым числом\n";
            return 0;
        }

        // Проверка суперпростоты числа (проверка простоты суммы цифр)
        int sum = 0;
        int temp = number;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }

        bool isSumPrime = true;
        for (int i = 2; i <= sqrt(sum); ++i) {
            if (sum % i == 0) {
                isSumPrime = false;
                break;
            }
        }

        // Вывод результата
        if (isSumPrime) {
            std::cout << number << " - суперпростое число\n";
        }
        else {
            std::cout << number << " - не является суперпростым числом\n";
        }

        return 0;
    }
