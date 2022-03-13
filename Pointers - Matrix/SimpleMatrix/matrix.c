#include "matrix.h"

int **createMatrix(size_t rows, size_t cols) {
    int **matrix = (int **)malloc(sizeof(int *) * rows);
    for (int i = 0; i < rows; i++)
        matrix[i] = (int *)malloc(sizeof(int) * cols);

    return matrix;
}

void printMatrix(int **matrix, size_t rows, size_t cols) {
    if (matrix == NULL)
        return;

    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

void clearMatrix(int **matrix, size_t rows) {
    if (matrix == NULL)
        return;

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
        matrix[i] = NULL;
    }
}
