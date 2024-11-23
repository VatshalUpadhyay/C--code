#include <stdio.h>

int running_total = 0;

void calculate_total(int value) {
    running_total += value;
    printf("%d ", running_total);
}

int main() {
    int input;

    printf("Enter numbers (EOF to quit): ");
    while (scanf("%d", &input) != EOF) {
        calculate_total(input);
    }

    return 0;
}