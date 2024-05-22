#include <stdio.h>

void printPattern(int rows, int cols) {
    int matrix[rows][cols];
    int i, j, k, num;

    num = 1;
    for (k = 0; k < rows + cols - 1; k++) {
        if (k < cols) {
            i = 0;
            j = k;
        } else {
            i = k - cols + 1;
            j = cols - 1;
        }
        while (i < rows && j >= 0) {
            matrix[i][j] = num++;
            i++;
            j--;
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("배열의 크기를 입력하세요 : ");
    scanf("%d %d", &rows, &cols);

    printPattern(rows, cols);

    return 0;
}