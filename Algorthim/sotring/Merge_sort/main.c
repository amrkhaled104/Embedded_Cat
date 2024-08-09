#include <stdio.h>
#include "Merge.h"

int main() {
    // Initialize an array to be sorted
    int arr1[] = {1,4,6,9,15};
    int arr2[] = {2,5,8,10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int arr3[size2+size1] ;

    // Call the Bubble_sort function to sort the array
    Merge_sort(arr1,size1);
    Merge_sort(arr2,size2);
	Merge(arr1,size1,arr2,size2,arr3);

    // Print the array after sorting
    printf("\nAfter Sorting\n");
    for (int i = 0; i < (sizeof(arr3) / sizeof(arr2[0])); i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}

