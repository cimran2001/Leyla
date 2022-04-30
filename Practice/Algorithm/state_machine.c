#include <stdio.h>
#include <string.h>

int main() {
    const char *actions = "kkkkkppkppkkkpkkpppk"; // 0 - push, 1 - bakikart => 4

    int counter = 0;
    int state = 0;
    
    for (int i = 0; i < strlen(actions); i++) {
        if (state == 0 && actions[i] == 'k') {
            state = 1;
            ++counter;
        }

        if (state == 1 && actions[i] == 'p') {
            state = 0;
        }
    }

    printf("The number of people passed through the turnstile: %d.\n", counter);
    return 0;
}
