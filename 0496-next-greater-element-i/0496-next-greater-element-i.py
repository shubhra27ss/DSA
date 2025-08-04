class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stack = []                    # Stack to keep track of decreasing elements
        next_greater = {}             # Dictionary to map each number to its next greater

        # Traverse nums2 from right to left
        for num in reversed(nums2):
            # Pop all elements smaller than or equal to current
            while stack and stack[-1] <= num:
                stack.pop()

            # If stack is empty, no greater element exists
            if not stack:
                next_greater[num] = -1
            else:
                next_greater[num] = stack[-1]

            # Push current element to stack
            stack.append(num)

        # Build result for nums1 using the precomputed map
        result = [next_greater[num] for num in nums1]
        return result