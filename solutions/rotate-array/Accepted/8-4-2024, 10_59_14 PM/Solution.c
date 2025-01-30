// https://leetcode.com/problems/rotate-array

void reverse(int *nums, int start, int end) {
    while(start<end) {
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;

    }
}

void rotate(int *nums, int numsSize,int k){
    k= k % numsSize;

    reverse(nums,0,numsSize-1); //reverses the whole array 

    reverse(nums,0,k-1); //reverses first half upto k elements

    reverse(nums, k, numsSize-1); // reverses the remaining part

    
}