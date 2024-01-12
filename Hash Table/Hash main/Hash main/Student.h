#pragma once

// Student.h

#include <string>

class Student {
public:
    int studentID;
    std::string studentName;

    Student(int id, const std::string& name);
};

