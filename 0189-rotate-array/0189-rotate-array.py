class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n  # Handle cases where k is greater than the array length
        def reverse(start, end):
            while start < end:
                nums[start], nums[end] = nums[end], nums[start]
                start += 1
                end -= 1

        # Step 1: Reverse the entire array
        reverse(0, n - 1)

        # Step 2: Reverse the first k elements
        reverse(0, k - 1)

        # Step 3: Reverse the remaining n - k elements
        reverse(k, n - 1)
"""
        # Create a temporary array to store the rotated elements
        temp = [0] * n

        # Copy the last 'k' elements to the beginning of the temporary array
        for i in range(k):
            temp[i] = nums[n - k + i]

        # Copy the remaining elements from the beginning of the original array
        # to the remaining positions in the temporary array
        for i in range(n - k):
            temp[k + i] = nums[i]

        # Copy the elements from the temporary array back to the original array
        for i in range(n):
            nums[i] = temp[i]
"""