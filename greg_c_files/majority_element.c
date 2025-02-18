// 169. Majority Element
// Given an array nums of size n, return the majority element.

# include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int current_candidate = nums[0];
    int score = 1;

    for (int i = 1; i < numsSize; i++) {
        if (score < 1) {
            current_candidate = nums[i];
            score = 1;
        }
        else if (current_candidate == nums[i]) {
            score ++;
        }
        else {
            score --;
        }
    }
    return current_candidate;
}






/* The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
*/