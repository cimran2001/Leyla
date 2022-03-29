#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LEN 256


size_t strLen(char *string);


int main() {
    printf("Enter your text: ");

    // char *string = NULL; // = (char *)malloc(sizeof(char) * MAX_STRING_LEN);
    // size_t len;
    // ssize_t lineSize = getline(&string, &len, stdin);

    // printf("String: %s\n", string);
    // printf("Len: %lu\n", len);
    // printf("Line size: %ld\n", lineSize);

    // free(string);

    char string[MAX_STRING_LEN];
    // gets(string); UNSAFE!!!
    fgets(string, MAX_STRING_LEN, stdin); // SAFE :3
    size_t stringLength = strLen(string);
    string[--stringLength] = '\0';

    printf("%s\n", string);
    printf("String length: %lu\n", stringLength);

    return 0;
}

size_t strLen(char *string) {
    if (string == NULL)
        return 0;

    size_t index = 0;
    while (string[index] != '\0')
        index++;
    
    return index;
}
