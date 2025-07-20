class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        
        result = [0] * len(nums)
        pos_index = 0  # even index for positive numbers
        neg_index = 1  # odd index for negative numbers

        for num in nums:
            if num > 0:
                result[pos_index] = num
                pos_index += 2
            else:
                result[neg_index] = num
                neg_index += 2

        return result

        """
        pos = []
        neg = []
        
        # Separate positive and negative numbers
        for i in nums:
            if i > 0:
                pos.append(i)
            else:
                neg.append(i)
        
        # Merge them alternatively
        result = []
        for x in range(len(pos)):
            result.append(pos[x])
            result.append(neg[x])
        
        return result
            
    """