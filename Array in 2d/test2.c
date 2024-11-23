#include <stdio.h>

int main() {
    int arr[5];
    int i, j, isDuplicate;

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements:\n");
    for (i = 0; i < 5; i++) {
        isDuplicate = 0;
        for (j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate) {
            printf("%d\n", arr[i]);
        }
    }
    printf("\n");

return 0;
}