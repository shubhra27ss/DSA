// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos = []
        neg = []
        
        # Separate positive and negative numbers
        for num in nums:
            if num > 0:
                pos.append(num)
            else:
                neg.append(num)
        
        # Merge them alternatively
        result = []
        for i in range(len(pos)):
            result.append(pos[i])
            result.append(neg[i])
        
        return result
            