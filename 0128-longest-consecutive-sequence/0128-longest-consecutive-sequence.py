class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
            if not nums:
                return 0
            
            # Step 1: Add all numbers to a set for O(1) lookups
            num_set = set(nums)
            max_length = 0
            
            # Step 2: Iterate through each number in the set
            for num in num_set:
                # Step 3: If num-1 is not in the set, it's the start of a sequence
                if num - 1 not in num_set:
                    length = 1
                    current = num
                    
                    # Step 4: Explore the sequence from num
                    while current + 1 in num_set:
                        current += 1
                        length += 1
                    
                    # Step 5: Update the max length
                    max_length = max(max_length, length)
            
            return max_length