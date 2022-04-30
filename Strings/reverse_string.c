#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TEXT_SIZE 256


void readLine(char *text, int textLen);
void reverse(char *text);


int main() {
    char text[MAX_TEXT_SIZE];
    readLine(text, MAX_TEXT_SIZE);

    reverse(text);
    printf("%s\n", text);
}


void readLine(char *text, int textLen) {
    if (text == NULL)
        return;

    fgets(text, textLen, stdin);
    text[strlen(text) - 1] = '\0';
}

void reverse(char *text) {
    if (text == NULL)
        return;

    size_t textLen = strlen(text);
    // char *newText = (char *)malloc(sizeof(char) * textLen);

    // for (int i = 0; i < textLen; i++)
    //     newText[textLen - i - 1] = text[i];

    // for (int i = 0; i < textLen; i++)
    //     text[i] = newText[i];

    // free(newText);


    char c;

    for (int i = 0; i < textLen / 2; i++) {
        c = text[i];
        text[i] = text[textLen - i - 1]; 
        text[textLen - i - 1] = c;
    }
}
