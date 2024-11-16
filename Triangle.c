#include <stdio.h>

int main() {
    int arr[3];  // Array to store the three integers
    int original[3];  // Array to store the original values before sorting
    int i, j, temp;

    // Reading the three integers into the array
    printf("Enter three integers: ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        original[i] = arr[i];  // Save the original values
    }

    // Sorting the array using a simple bubble sort
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing the sorted values
    for (i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    // Printing a blank line
    printf("\n");

    // Printing the original values as they were read
    for (i = 0; i < 3; i++) {
        printf("%d\n", original[i]);
    }

    return 0;
}


