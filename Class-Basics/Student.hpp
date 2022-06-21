#pragma once
#include <iostream>
#include <string>


class Student {
private:
    std::string name;
    std::string surname;
    unsigned long id;
    unsigned age;

public:
    Student(std::string name, std::string surname, unsigned age, unsigned long id);

    std::string getName();
    std::string getSurname();
    unsigned getAge();
    unsigned long getId();

    void setAge(unsigned newAge);

    void print();
};
