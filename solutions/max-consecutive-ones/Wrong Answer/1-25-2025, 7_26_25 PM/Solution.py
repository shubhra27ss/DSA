// https://leetcode.com/problems/max-consecutive-ones

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0
        maximum = 0
        n=len(nums)
        for i in range(1,n):
            if nums[i]==1:
                count+=1
            else:
                count = 0
            maximum = max(maximum,count)
        return maximum

        