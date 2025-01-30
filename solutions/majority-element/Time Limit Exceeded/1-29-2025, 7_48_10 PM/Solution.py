// https://leetcode.com/problems/majority-element

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n= len (nums)
        for i in range(n):
            count = 0
            for j in range(n):
                if nums[j]==nums[i]:
                    count+=1
            if count > (n//2):
                return nums[i]
        return -1

        