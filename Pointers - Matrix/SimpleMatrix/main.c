#include <stdio.h>
#include "matrix.h"

#define ROWS 4
#define COLS 5

int main() {
    int **matrix = createMatrix(ROWS, COLS);

    printMatrix(matrix, ROWS, COLS);

    clearMatrix(matrix, ROWS);
    free(matrix);
    matrix = NULL;

    int **newMatrix = sumMatrix(matrix, ROWS, COLS, matrix, ROWS, COLS);
    
    return 0;
}