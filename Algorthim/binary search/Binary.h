/**
 ******************************************************************************
 * @file           : Binary.h >> Binary Search
 * @author         : Amr Khaled
 * @brief          : Binary.h that consists of the prototypes of the functions 
 * @date           : 22/6/2024
 ******************************************************************************
**/

#ifndef BINARY_H
#define BINARY_H

/**
 * @brief Iterative Implementation of Binary Search
 * @param arr[] The array in which to search
 * @param size The size of the array
 * @param num The number to search for
 * @return The index of the number if found, otherwise -1
 */
int BS_IT(int arr[], int size, int num);

/**
 * @brief Recursive Implementation of Binary Search
 * @param arr[] The array in which to search
 * @param size The size of the array
 * @param low The starting index of the search range
 * @param high The ending index of the search range
 * @param num The number to search for
 * @return The index of the number if found, otherwise -1
 */
int BS_RE(int arr[], int size, int low, int high, int num);

/**
 * @brief Finding the first or last occurrence of a number in a sorted array
 * @param arr[] The array in which to search
 * @param size The size of the array
 * @param num The number to search for
 * @param flag 0 to find the first occurrence, 1 to find the last occurrence
 * @return The index of the first or last occurrence if found, otherwise -1
 */
int BS_FL(int arr[], int size, int num, int flag);

/**
 * @brief Find the index of the minimum element in a rotated sorted array
 * @param arr[] The rotated sorted array
 * @param size The size of the array
 * @return The index of the minimum element
 */
int BS_NR(int arr[], int size);

/**
 * @brief Circular Array Search using Modified Binary Search
 * @param arr[] The circular sorted array in which to search
 * @param size The size of the array
 * @param num The number to search for
 * @return The index of the number if found, otherwise -1
 */
int circularArraySearch(int arr[], int size, int num);

#endif // BINARY_H
