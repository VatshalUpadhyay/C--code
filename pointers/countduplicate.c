#include <stdio.h>

int countDuplicates(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark as visited
                }
            }
        }
    }

    return count;
}

int main() {
    int size = 10;
    int arr[] = {10, 9, 10, 9, 8, 9, 8, 7, 7, 6};

    printf("The number of duplicate elements is: %d\n", countDuplicates(arr, size));

    return 0;
}