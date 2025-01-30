// https://leetcode.com/problems/single-number

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        xorr = 0
        n = len(nums)
        for i in nums:
            xorr ^= i
        return xorr

