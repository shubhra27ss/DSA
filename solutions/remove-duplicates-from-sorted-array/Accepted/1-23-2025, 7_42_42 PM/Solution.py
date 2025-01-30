// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=0 #tracks position for next unique element and j just iterates over all elements
        for j in range(1,len(nums)):
            if nums[i] != nums[j]: #if both are different then increment i and swap i and j elements with each other
                i += 1
                nums[i]=nums[j]
        return i+1
        