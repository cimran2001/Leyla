#include <iostream>
#include "Student.hpp"
#include "Teacher.hpp"
#include "School.hpp"


int main() {
    Student student("Imran", "Jabrayilov", 20, 21921940);
    Teacher teacher("Imran", "Jabrayilov", 0.1);


    School school("Genc Istedadlar liseyi", 0);
    school.addStudent(student);
    school.addTeacher(teacher);

    std::cout << school.getPeopleCount() << std::endl;

}
