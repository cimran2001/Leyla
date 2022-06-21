#pragma once

#include <string>

class Teacher {
private:
    std::string name;
    std::string surname;
    size_t salary;

public:
    Teacher(std::string name, std::string surname, float salary);

    float getSalary();
    void setSalary(float newSalary);

    void addSalary(float additional);
};