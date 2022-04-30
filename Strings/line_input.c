#include <stdio.h>
#include <string.h>
#define NAME_LEN_MAX 100


void readLine(char *text, int textLen);

int main() {
    char name[NAME_LEN_MAX];
    readLine(name, NAME_LEN_MAX);

    char text[1000];
    readLine(text, 1000);

    printf("%s\n", name);
    printf("%s\n", text);
}

void readLine(char *text, int textLen) {
    if (text == NULL)
        return;

    fgets(text, textLen, stdin);
    text[strlen(text) - 1] = '\0';
}