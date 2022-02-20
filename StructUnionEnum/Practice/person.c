#include <stdio.h>

typedef struct {
    const char *name;
    const char *surname;
    size_t age;
    size_t height;
} Person;

Person createPerson(const char *name, const char *surname, size_t age, size_t height);
void printPerson(Person person);

void editName(Person *person, const char *new_name);
void editSurname(Person *person, const char *new_surname);
void editAge(Person *person, size_t new_age);
void editHeight(Person *person, size_t new_height);
void birthdayOfPerson(Person *person);

int main() {
    Person person = createPerson("Imran", "Jabrayilov", 20, 175);
    printPerson(person);

    editSurname(&person, "Jabrayil");
    birthdayOfPerson(&person);
    printPerson(person);

    return 0;
}

Person createPerson(const char *name, const char *surname, size_t age, size_t height) {
    Person person;

    person.name = name;
    person.surname = surname;
    person.age = age;
    person.height = height;

    return person;
}

void printPerson(Person person) {
    printf("Name Surname: %s %s\nAge: %lu\nHeight: %lu\n", person.name, person.surname, person.age, person.height);
}

void editName(Person *person, const char *new_name) {
    person->name = new_name;
}

void editSurname(Person *person, const char *new_surname) {
    person->surname = new_surname;
}

void editAge(Person *person, size_t new_age) {
    person->age = new_age;
}

void editHeight(Person *person, size_t new_height) {
    person->height = new_height;
}

void birthdayOfPerson(Person *person) {
    person->age++;
}
