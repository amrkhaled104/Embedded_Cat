#include "selection_sort"


void selection_sort(int arr[], int size) {
    // Loop through each element in the array
    for (int i = 0; i < size - 1; i++) {
        int min = arr[i]; // Assume the current element is the minimum
        int index = i;    // Index of the minimum element

        // Find the minimum element in the remaining unsorted array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j]; // Update the minimum value
                index = j;    // Update the index of the minimum element
            }
        }

        // Swap the found minimum element with the current element
        if (index != i) {
            arr[i] = arr[i] + arr[index];
            arr[index] = arr[i] - arr[index];
            arr[i] = arr[i] - arr[index];
        }
    }
}
