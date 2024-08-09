# Merge Sort with Merge Function

This project demonstrates how to use the merge sort algorithm and merge two sorted arrays into one sorted array.

## Files

- `Merge.h`: Header file that declares the `Merge_sort` and `Merge` functions.
- `Merge.c`: Contains the implementations of the `Merge_sort` and `Merge` functions.
- `main.c`: The main file that demonstrates how to use the merge sort and merge functions to merge two sorted arrays.

## Functions

### `void Merge_sort(int A[], int LenA);`
Sorts an array `A` of length `LenA` using the merge sort algorithm.

### `void Merge(int L[], int LenL, int R[], int LenR, int A[]);`
Merges two sorted arrays `L` and `R` into the array `A`.

## Compilation

To compile the code, use the following command:

```sh
gcc -o merge_sort main.c Merge.c
