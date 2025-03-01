#include <stdio.h>
void printMatrix(int matrix[2][3], int rows, int cols) {
printf("Matrix:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
}