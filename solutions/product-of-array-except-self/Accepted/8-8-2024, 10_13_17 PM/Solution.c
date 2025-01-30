// https://leetcode.com/problems/product-of-array-except-self

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *(output)=(int*)malloc(numsSize* sizeof(int));
    output[0]=1;

    for(int i=1;i<numsSize;i++ ) {
        output[i]=output[i-1] * nums[i-1];
    }
    int right=1;
    for(int i=numsSize-1;i>=0;i--) {
        output[i]=output[i] *right;
        right=right*nums[i];
    }
    return output;
}