#include <iostream>
#include <windows.h>
#include <string>
#include "Student.h"
#include "IdCard.h"
#include "Group.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    string name;
    string last_name;
    IdCard* idc = new IdCard(123456, "Базовый");
    IdCard* idc2 = new IdCard(654321, "Базовый");
    //int id;
    //string category;

    // ¬вод имени с клавиатуры
    cout << "Name: ";
    getline(cin, name);

    // ¬вод фамилии
    cout << "Last name: ";
    getline(cin, last_name);

    //cout << "Category: ";
    //getline(cin, category);
    //idc->setCategory(category);

    //cout << "IdCard :";
    //cin >> id;
    //idc->setNumber(id);

        // ѕередача параметров конструктору
    // Student* student02 = new Student(name, last_name, idc);
    Student* student02 = new Student(name, last_name, idc);

    //Student student03("Петр", "Петров", idc2);
    //Student student04("Семен", "Смирнов", idc);
    //Student student05("Саша", "Коен", idc2);
    //Student student06("Дмитрий", "Ионов", idc);

    Student* student03 = new Student("Петр", "Петров", idc2);
    Student* student04 = new Student("Семен", "Смирнов", idc);
    Student* student05 = new Student("Саша", "Коен", idc2);
    Student* student06 = new Student("Дмитрий", "Ионов", idc)

    Group gr1957("1957");

   // gr1957.addStudent(student02);
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);

    int k = gr1957.getSize();

    gr1957.GroupSort();

    cout << "В группе " << gr1957.getName() << " " << k << " ст." << endl;
    gr1957.GroupOut();

    // ќценки
    int scores[5];
    // —умма всех оценок
    int sum = 0;

    // ¬вод промежуточных оценок 
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        // суммирование
        sum += scores[i];
    }

    // —охран¤ем промежуточные оценки в объект класса Student
    student02->set_scores(scores);

    // —читаем средний балл
    double average_score = sum / 5.0;
    // —охран¤ем средний балл в объект класса Student
    student02->set_average_score(average_score);

    //IdCard* card = new IdCard(123);
    //student02->setIdCard(*card);

    // ¬ыводим данные по студенту
    cout << "Average ball for " << student02->get_name() << " "
        << student02->get_last_name() << " is "
        << student02->get_average_score() << endl;


    cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    cout << "Category: " << student02->getIdCard().getCategory() << endl;


    // ”даление объекта student из пам¤ти
    delete student02;
    return 0;
}
