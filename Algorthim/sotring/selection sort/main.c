#include <stdio.h>
#include "selection.h"

int main() {
    // Initialize an array to be sorted
    int arr[] = {5, 2, 4, 7, 1, 2, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the array before sorting
    printf("Before Sorting\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Call the selection_sort function to sort the array
    selection_sort(arr, size);

    // Print the array after sorting
    printf("\nAfter Sorting\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
