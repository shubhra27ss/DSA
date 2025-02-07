class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def find_first(nums, target):
            left, right = 0, len(nums) - 1
            first = -1
            while left <= right:
                mid = (left + right) // 2
                if nums[mid] >= target:  
                    right = mid - 1
                else:
                    left = mid + 1
                if nums[mid] == target:
                    first = mid
            return first

        def find_last(nums, target):
            left, right = 0, len(nums) - 1
            last = -1
            while left <= right:
                mid = (left + right) // 2
                if nums[mid] <= target:  
                    left = mid + 1
                else:
                    right = mid - 1
                if nums[mid] == target:
                    last = mid
            return last

        return [find_first(nums, target), find_last(nums, target)]
