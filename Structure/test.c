#include <stdio.h>
#include <stdlib.h>

int* interchange(int *A, int n) {
    int *B = (int*)malloc(n * sizeof(int));
    if (B == NULL) {
        return NULL; // Handle memory allocation failure
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && i + 1 < n) {
            // Swap elements i and i+1 in B
            B[i] = A[i + 1];
            B[i + 1] = A[i];
            i++;
        } else 
      {
            // Copy the last element if it's not part of a pair to swap
            B[i] = A[i];
        }
    };
    
    return B;
}

int main() {
    int N, A[20];
    printf("Enter array size (even number <= 20): ");
    scanf("%d", &N);
    
    printf("Enter the elements of array A:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int *B = interchange(A, N);
    if (B == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("The elements of array B are:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    free(B); // Free the allocated memory for B
return 0;
}