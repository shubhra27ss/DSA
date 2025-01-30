// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

int removeDuplicates(int* nums, int numsSize) {
    int index=2;
    if(numsSize<=2) {
        return numsSize; // because any element can occur twice so if the size is 2 then we dont need to check it
    }

    for(int i=2;i<numsSize;i++) {
        if(nums[i]!=nums[index-2]) {
            nums[index++]=nums[i];
        }
    }
    return index;
    

}