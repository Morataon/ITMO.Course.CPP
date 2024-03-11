#pragma once
#include "student.h"
#include "teacher.h"
class humanFactory {
public:
    student* createStudent() {
        return new student();
    };

    teacher* createTeacher() {
        return new teacher();
    };

    ~humanFactory() {}
};