#include "Teacher.hpp"

Teacher::Teacher(std::string name, std::string surname, float salary) {
    this->name = name;
    this->surname = surname;
    this->salary = salary * 100;
}

float Teacher::getSalary() {
    return (float)salary / 100;
}

void Teacher::setSalary(float newSalary) {
    salary = newSalary * 100;
}

void Teacher::addSalary(float additional) {
    salary += additional * 100;
}
