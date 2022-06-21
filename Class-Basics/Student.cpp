#include "Student.hpp"

Student::Student(std::string name, std::string surname, unsigned age, unsigned long id) {
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->id = id;
}

std::string Student::getName() {
    return name;
}

std::string Student::getSurname() {
    return surname;
}

unsigned Student::getAge() {
    return age;
}

unsigned long Student::getId() {
    return id;
}

void Student::setAge(unsigned newAge) {
    age = newAge;
}

void Student::print() {
    std::cout << "Name: " << name << "\n"
        << "Surname: " << surname << "\n"
        << "Age: " << age << "\n"
        << "StudentID: " << id << "\n";
}
