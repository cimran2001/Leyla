#include <stdio.h>
#include <string.h>
#define NAME_LEN_MAX 100


typedef struct {
    char name[NAME_LEN_MAX];
    float weight;
} Person;


void readLine(char *text, int textLen);
Person inputPerson();
void printPerson(Person person);


int main() {
    Person imran = inputPerson();
    printPerson(imran);

    return 0;
}


void readLine(char *text, int textLen) {
    if (text == NULL)
        return;

    fgets(text, textLen, stdin);
    text[strlen(text) - 1] = '\0';
}

Person inputPerson() {
    Person person;

    readLine(person.name, NAME_LEN_MAX);
    scanf("%f%*c", &person.weight);

    return person;
}

void printPerson(Person person) {
    printf("%s, %gkg\n", person.name, person.weight);
}
