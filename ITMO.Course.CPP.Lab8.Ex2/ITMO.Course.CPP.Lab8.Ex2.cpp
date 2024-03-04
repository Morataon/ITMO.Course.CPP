﻿#include <iostream>
#include <string>
#include "student.h"

using namespace std;
int main()
{
	// Cоздание объекта класса Student
	Students student01;
	string name;
	string last_name;
	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// Cохранение имени и фамилии в объект класса Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	//Оценки
	int scores[5];
	// Cумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохраняем промежуточные оценки в объект класса Student
	student01.set_scores(scores);
	// Считаем средний балл
	double average_score = sum / 5.0;
	// Сохраняем средний балл в объект класса Student
	student01.set_average_score(average_score);
	// Выводим данные по студенту
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;
	return 0;
}