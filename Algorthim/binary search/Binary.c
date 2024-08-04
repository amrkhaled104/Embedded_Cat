/**
 **********************************************************************************
 * @file           : Binary.c >> Binary Search
 * @author         : Amr Khaled
 * @brief          : Binary.c that consists of the implementation of the functions 
 * @date           : 22/6/2024
 **********************************************************************************
**/

#include <stdio.h>
#include "Binary.h"

int BS_IT(int arr[], int size, int num) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num) return mid;
        else if (num > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int BS_RE(int arr[], int size, int low, int high, int num) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == num) return mid;
    else if (num > arr[mid]) return BS_RE(arr, size, mid + 1, high, num);
    else return BS_RE(arr, size, low, mid - 1, num);
}

int BS_FL(int arr[], int size, int num, int flag) {
    int low = 0, res = -1, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num) {
            res = mid;
            if (flag) low = mid + 1;  // Find the last occurrence
            else high = mid - 1;      // Find the first occurrence
        } else if (num > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return res;
}

int BS_NR(int arr[], int size) {
    int low = 0, high = size - 1;
    while (low <= high) {
        if (arr[low] <= arr[high]) return low;
        int mid = low + (high - low) / 2;
        int next = (mid + 1) % size;
        int prev = (mid - 1 + size) % size;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) return mid;
        if (arr[mid] >= arr[low]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int circularArraySearch(int arr[], int size, int num) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == num) return mid;

        // Determine which part is properly sorted
        if (arr[low] <= arr[mid]) {  // Left part is sorted
            if (num >= arr[low] && num < arr[mid])
                high = mid - 1;  // Search in the left part
            else
                low = mid + 1;   // Search in the right part
        } else {  // Right part is sorted
            if (num > arr[mid] && num <= arr[high])
                low = mid + 1;   // Search in the right part
            else
                high = mid - 1;  // Search in the left part
        }
    }

    return -1;  // Element not found
}
