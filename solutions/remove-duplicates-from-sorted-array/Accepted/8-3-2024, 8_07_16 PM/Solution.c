// https://leetcode.com/problems/remove-duplicates-from-sorted-array

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0) {
        return numsSize;
    }

    int index=1; // since the first element is always unique we start from index 1
    for(int i=0;i<numsSize-1;i++) {
        // 0 to numsSize-1 because if we do i++ on last then it will exceed the limit
        if(nums[i+1] != nums[i]) {
            nums[index]=nums[i+1];
            index++;
        }
    }
    return index;
}