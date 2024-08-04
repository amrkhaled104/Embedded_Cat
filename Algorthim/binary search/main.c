/**
 **********************************************************************************
 * @file           : main.c >> Binary Search
 * @author         : Amr Khaled
 * @brief          : main.c that consists of tests for the implementation level 
 * @date           : 22/6/2024
 **********************************************************************************
**/

#include <stdio.h>
#include "Binary.h"

int main() {
    int arr[] = {12, 14, 18, 21, 3, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter Number:\n");
    int num;
    scanf("%d", &num);

    // Iterative Binary Search
    int index_it = BS_IT(arr, size, num);
    if (index_it != -1)
        printf("Iterative: %d found at index %d\n", num, index_it);
    else
        printf("Iterative: %d not found\n", num);

    // Recursive Binary Search
    int index_re = BS_RE(arr, size, 0, size - 1, num);
    if (index_re != -1)
        printf("Recursive: %d found at index %d\n", num, index_re);
    else
        printf("Recursive: %d not found\n", num);

    // Count occurrences of a number in a sorted array with duplicates using Binary Search
    int first = BS_FL(arr, size, num, 0);
    int last = BS_FL(arr, size, num, 1);

    if (first == -1 || last == -1) {
        printf("%d is not present in the array\n", num);
    } else {
        printf("%d is duplicated %d times\n", num, last - first + 1);
    }

    // Find the index of the minimum element in a rotated sorted array
    int rotation_index = BS_NR(arr, size);
    printf("The array is rotated %d times\n", rotation_index);

    // Search the element in the circular sorted array
    int circular_index = circularArraySearch(arr, size, num);
    if (circular_index != -1)
        printf("%d found at index %d in circular sorted array\n", num, circular_index);
    else
        printf("%d not found in the circular sorted array\n", num);

    return 0;
}
