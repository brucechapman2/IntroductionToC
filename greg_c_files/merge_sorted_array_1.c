#include <stdio.h>

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. Merge nums1 and nums2 into a single array sorted in non-decreasing order.

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // initialising pointers for last element of sorted nums1 (mpoint), last element of nums2 (npoint) and last element of total nums1 array (nmpoint)
    // this means we can use backwards insertion to compare the last element of nums1 and nums2, then put the larger of the two in the final position of the nums1 array

/* JUNK - these pointers were going stale, so instead do arithmetic directly on array pointers to dynamically update

    int* mpoint = *(nums1 + m - 1) - 1;
    int* npoint = *(nums2 + n - 1)  - 1;
    int* nmpoint = *(nums1 + m - 1) + n  - 1;*/

    // loop to compare *(nums1 + m - 1) and *(nums2 + n - 1) and assign them to the back end of nums1 while nums1 && nums2 both have unmerged elements remaining
    // if *(nums1 + m - 1) == *(nums2 + n - 1), we put both on the end of nums1
    while (m > 0 && n > 0) {
        
        /* debug before iteration
        
                printf("\nBEFORE ITERATION:\nm = %d, n = %d, mp = %d, np = %d, nmp = %d\nnums1 = ", m, n, *(nums1 + m - 1), *(nums2 + n - 1), *(nums1 + n + m - 1));
                for (int i = 0; i < 6; i++) {
                    printf("%d ", nums1[i]); */
        }
        if (*(nums1 + m - 1) == *(nums2 + n - 1)) {
            *(nums1 + n + m - 1) = *(nums1 + m - 1);
            m --;
            *(nums1 + n + m - 1) = *(nums2 + n - 1);
            n --;
        }
        else if (*(nums1 + m - 1) > *(nums2 + n - 1)) {
            *(nums1 + n + m - 1) = *(nums1 + m - 1);
            m --;
        }
        else {
            *(nums1 + n + m - 1) = *(nums2 + n - 1);
            n --;
        }
   
    // once an array is fully merged, we merge all the remaining (already sorted) unmerged elements of the other array into nums1
    if (m == 0) {
        while (n > 0) {
            *(nums1 + n + m - 1) = *(nums2 + n - 1);
            n --;
        }
    }
    if (n == 0) {
        while (m > 0) {
            *(nums1 + n + m - 1) = *(nums1 + m - 1);
            m --;
        }

    }
}