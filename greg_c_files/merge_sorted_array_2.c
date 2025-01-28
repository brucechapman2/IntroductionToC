#include <stdio.h>

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. Merge nums1 and nums2 into a single array sorted in non-decreasing order.

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    while (m > 0 && n > 0) {
        if (*(nums1 + m - 1) > *(nums2 + n - 1)) {
            *(nums1 + m + n - 1) = *(nums1 + m - 1);
            m--;
            }
        else {
            *(nums1 + m + n - 1) = *(nums2 + n - 1);
            n--;
            }
        }
    while (n > 0) {
        *(nums1 + m + n - 1) = *(nums2 + n - 1);
        n--;
    }
}