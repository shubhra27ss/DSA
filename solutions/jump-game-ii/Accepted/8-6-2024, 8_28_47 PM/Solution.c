// https://leetcode.com/problems/jump-game-ii

#include <stdio.h>

int jump(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return 0; // No jumps needed if the array has 1 or fewer elements
    }
    
    int jumps = 0;
    int current_end = 0;
    int farthest = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        // Update the farthest we can reach from the current index
        if (i + nums[i] > farthest) {
            farthest = i + nums[i];
        }

        // If we've reached the end of the range for the current jump
        if (i == current_end) {
            jumps++;
            current_end = farthest;
            
            // If we've reached or exceeded the last index, break out
            if (current_end >= numsSize - 1) {
                break;
            }
        }
    }
    
    return jumps;
}
