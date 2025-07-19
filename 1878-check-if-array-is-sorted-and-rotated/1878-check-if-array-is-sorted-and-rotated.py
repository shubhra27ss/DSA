class Solution:
    def check(self, nums: List[int]) -> bool:
        count = 0
        n = len(nums)
        for i in range(1,n):
            if nums[i-1]>nums[i]:
                count+=1
        if nums[n-1] > nums[0]:
            count+=1
        return count<=1


        
        
        #Checks if the given array is sorted and rotated.

        #Args:
         #   nums: The input array of integers.

        #Returns:
         #   True if the array is sorted and rotated, False otherwise.
        
        """

        if not nums:
            return True  # Empty array is considered sorted and rotated

        found_decreasing = False

        for i in range(len(nums)):
            if nums[i] > nums[(i + 1) % len(nums)]:
                if found_decreasing:
                    return False  # More than one decreasing point found
                found_decreasing = True

        return True
        """