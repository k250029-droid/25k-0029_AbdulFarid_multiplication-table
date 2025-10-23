#include <stdio.h>
int main() {
    int matrix1[3][3] = {
        {12, 45, 32},
        {2, 13, 45},
        {56, 72, 41}
    };

    int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of both matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

