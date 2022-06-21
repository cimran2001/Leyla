#include "School.hpp"

School::School(std::string name, size_t schoolNumber) {
    this->name = name;
    no = schoolNumber;

    director = new Director{};
}

void School::addStudent(Student student) {
    students.push_back(student);
}

void School::addTeacher(Teacher teacher) {
    teachers.push_back(teacher);
}

size_t School::getPeopleCount() {
    return teachers.size() + students.size();
}

School::~School() {
    delete director;
}