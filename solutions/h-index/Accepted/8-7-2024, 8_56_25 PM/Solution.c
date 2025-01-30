// https://leetcode.com/problems/h-index

#include <stdio.h>
#include <stdlib.h>

int hIndex(int* citations, int citationsSize) {
    int n = citationsSize;
    int *count = (int*)malloc((n + 1) * sizeof(int));

    if (count == NULL) {
        return -1; // Handle allocation failure
    }

    for (int i = 0; i <= n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (citations[i] >= n) {
            count[n]++;
        } else {
            count[citations[i]]++;
        }
    }

    int total = 0, h = 0;
    for (int i = n; i >= 0; i--) {
        total = total + count[i];
        if (total >= i) {
            h = i;
            break; // Found the h-index, no need to continue
        }
    }

    free(count);
    return h;
}
