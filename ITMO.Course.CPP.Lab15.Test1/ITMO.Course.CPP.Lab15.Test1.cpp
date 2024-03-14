#include <iostream>
#include <map>
#include <string>

using namespace std;

struct StudentGrade 
{
    string name;
    char grade;
};

int main() 
{
    map<string, char> gradesMap;

    gradesMap["Anton"] = '4';
    gradesMap["Maxim"] = '5';
    gradesMap["Trophim"] = '3';

    string studentName;
    cout << "Enter student name: ";
    cin >> studentName;

    if (gradesMap.find(studentName) != gradesMap.end()) 
    {
        cout << "Student exam score " << studentName << " - " << gradesMap[studentName] << endl;
    }
    else 
    {
        cout << "There are no students with this name" << endl;
    }

    return 0;
}