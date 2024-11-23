 #include <stdio.h>
#include <stdlib.h>

float *create(float arrayname[], int n) {
    // Allocate memory for the array of size n
    arrayname = (float *)malloc(n * sizeof(float));

    // Check if memory allocation was successful
    if (arrayname == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    // Initialize the first element to 1.1
    arrayname[0] = 1.1;

    // Initialize the last element to 2.2
    arrayname[n - 1] = 2.2;

    // Initialize all remaining elements to 0
    for (int i = 1; i < n - 1; i++) {
        arrayname[i] = 0.0;
    }

    // Return the array pointer
    return arrayname;
}

int main() {
    int N;
    printf("Enter size of array(>3): ");
    scanf("%d", &N);

    float *array = create(array, N);
    printf("The array elements are:\t");

    // Print the array to verify the values
    if (array != NULL) {
        for (int i = 0; i < N; i++) {
 printf("%.1f\t", *(array + i));
        }
        printf("\n");
        free(array); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
 return 0;
}