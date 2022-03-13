#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int **matrix;
    size_t rows;
    size_t cols;
} Matrix;


Matrix createMatrix(size_t rows, size_t cols);
void printMatrix(Matrix matrix);
void clearMatrix(Matrix matrix);

#endif
