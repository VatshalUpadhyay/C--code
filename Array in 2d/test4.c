#include <stdio.h>

int main() {
    int numbers[7], frequency[5] = {0};

    printf("Enter 7 integers in the range 1 to 5:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] >= 1 && numbers[i] <= 5) {
            frequency[numbers[i] - 1]++;
        } else {
            printf("Invalid input. Please enter a number between 1 and 5.\n");
            i--;
        }
    }

    printf("Frequency of 1 is %d\n", frequency[0]);
    printf("Frequency of 2 is %d\n", frequency[1]);
    printf("Frequency of 3 is %d\n", frequency[2]);
    printf("Frequency of 4 is %d\n", frequency[3]);
    printf("Frequency of 5 is %d\n", frequency[4]);

return 0;
}