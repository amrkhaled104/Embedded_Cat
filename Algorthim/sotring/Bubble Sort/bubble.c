#include "bubble.h"

void Bubble_sort(int arr[], int size) {
    // Loop through each element in the array
    for (int i = 0; i < size - 1; i++) {
        int flag = 0;  // Flag to detect if any swapping happens

        // Perform bubble sort by comparing adjacent elements
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                flag = 1;  // Mark that a swap has occurred
                // Swap elements using multiplication and division
                arr[i] = arr[i] * arr[j];
                arr[j] = arr[i] / arr[j];
                arr[i] = arr[i] / arr[j];
            }
        }

        // If no swaps occurred, the array is already sorted
        if (!flag) break;
    }
}
