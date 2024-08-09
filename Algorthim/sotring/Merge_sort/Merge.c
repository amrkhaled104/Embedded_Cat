#include "Merge.h"
#include <stdlib.h> // لاستخدام malloc

void Merge(int L[], int LenL, int R[], int LenR, int A[]) {
    int i = 0, j = 0, k = 0;

    while (i < LenL && j < LenR) {
        if (L[i] < R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < LenL) {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < LenR) {
        A[k] = R[j];
        j++;
        k++;
    }
}
void Merge_sort(int A[], int LenA) {
    if (LenA < 2) return;

    int mid = LenA / 2;

    int left [mid];
    int right [LenA-mid]; 

    for (int i = 0; i < mid; i++) {
        left[i] = A[i];
    }
    for (int i = mid; i < LenA; i++) {
        right[i - mid] = A[i];
    }

    Merge_sort(left, mid);
    Merge_sort(right, LenA - mid);
    Merge(left, mid, right, LenA - mid, A);
}