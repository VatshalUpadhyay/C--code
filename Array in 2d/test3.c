#include <stdio.h>

void print_odd_numbers(int matrix[2][2]) {
    printf("Odd elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matrix[i][j] % 2 != 0) {
                printf("%d\n", matrix[i][j]);
            }
        }
    }
}

int main() {
    int matrix[2][2];

    printf("Enter the elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]); 

        }
    }

    printf("Input matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    print_odd_numbers(matrix);

return 0;
}