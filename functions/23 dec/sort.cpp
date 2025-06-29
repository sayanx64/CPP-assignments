#include <stdio.h>
#include <string.h>

void bubble_sort(char A[][10], int n) {
    char temp[10]; // Temporary array to hold a string during swapping

    // Perform Bubble Sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(A[j], A[j + 1]) > 0) { // Compare strings
                // Swap A[j] and A[j + 1]
                strcpy(temp, A[j]);
                strcpy(A[j], A[j + 1]);
                strcpy(A[j + 1], temp);
            }
        }
    }
}

int main() {
    // Initialize a 2D character array
    char A[][10] = {"🧒🏻", "🧒🏼", "🧒🏽", "🧒🏿", "🧒🏾"};
    int n = sizeof(A) / sizeof(A[0]); // Calculate number of rows

    printf("Original characters:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s ", A[i]);
    }
    printf("\n");

    // Sort the array
    bubble_sort(A, n);

    printf("Sorted characters:\n");
    for (int i = 0; i < n; ++i) {
        printf("%s ", A[i]);
    }
    printf("\n");

    return 0;
}
