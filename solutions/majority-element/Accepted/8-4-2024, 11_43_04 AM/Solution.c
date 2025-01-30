// https://leetcode.com/problems/majority-element

int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int candidate = 0; //candidate is the element that might be majority

    
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;

}