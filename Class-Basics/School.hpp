#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Teacher.hpp"
#include "Student.hpp"

class School {
private:
    std::string name;
    size_t no;
    std::vector<Teacher> teachers;
    std::vector<Student> students;

public:
    School(std::string name, size_t schoolNumber);

    void addStudent(Student student);
    void addTeacher(Teacher teacher);

    size_t getPeopleCount();
};
