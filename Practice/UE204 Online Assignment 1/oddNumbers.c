#include <stdio.h>


int main() {
    int start, end;
    printf("Enter 2 numbers (first < second): ");
    scanf("%d %d", &start, &end);

    if (start >= end) {
        puts("Not a correct input. ");
        return -1;
    }

    if (start % 2 == 0)
        start++;
    
    if (end % 2 == 0)
        end--;
    
    for (; start <= end; start += 2) {
        printf("%d", start);
        if (start == end)
            printf("\n");
        else 
            printf(", ");
    }

    return 0;
}
