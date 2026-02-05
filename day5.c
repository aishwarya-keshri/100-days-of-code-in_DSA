#include <stdio.h>

int main() {
    int p, q;
    int a[1000], b[1000];
    int i = 0, j = 0;

    // Input for first server log
    printf("Enter number of elements in first array: ");
    scanf("%d", &p);

    printf("Enter elements of first array (sorted): ");
    for (int x = 0; x < p; x++) {
        scanf("%d", &a[x]);
    }

    // Input for second server log
    printf("Enter number of elements in second array: ");
    scanf("%d", &q);

    printf("Enter elements of second array (sorted): ");
    for (int x = 0; x < q; x++) {
        scanf("%d", &b[x]);
    }

    // Merge and print in sorted order
    printf("Merged sorted array: ");
    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    // Print remaining elements of first array
    while (i < p) {
        printf("%d ", a[i]);
        i++;
    }

    // Print remaining elements of second array
    while (j < q) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}
