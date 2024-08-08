
#include "insertion.h"

void insertion_sort(int arr[], int size) {
    // Loop through each element starting from the second element
    for (int i = 1; i < size; i++) {
        int value = arr[i];  // The element to be inserted
        int hole = i;        // The position where the element will be inserted

        // Shift elements of the sorted segment that are greater than 'value' to the right
        while (hole > 0 && arr[hole - 1] > value) {
            arr[hole] = arr[hole - 1];
            hole = hole - 1;
        }

        // Insert the 'value' into its correct position
        arr[hole] = value;
    }
}
