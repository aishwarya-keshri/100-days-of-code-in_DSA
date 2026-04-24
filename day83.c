#include <stdio.h>

int main() {
    int n, i, j, min_index, temp;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    // Input array
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Selection Sort
    for(i = 0; i < n-1; i++) {
        min_index = i;

        for(j = i+1; j < n; j++) {
            if(A[j] < A[min_index]) {
                min_index = j;
            }
        }

        // Swap
        temp = A[i];
        A[i] = A[min_index];
        A[min_index] = temp;
    }

    // Output sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}