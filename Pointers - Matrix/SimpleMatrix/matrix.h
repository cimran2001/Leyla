#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <stdio.h>
#include <stdlib.h>

int **createMatrix(size_t rows, size_t cols);
void printMatrix(int **matrix, size_t rows, size_t cols);
void clearMatrix(int **matrix, size_t rows);

#endif