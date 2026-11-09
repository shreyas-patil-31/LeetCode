class Solution:
    def isMiddleElementUnique(self, nums: list[int]) -> bool:
        mid = len(nums)//2
        k = nums[mid]
        if nums.count(k) > 1:
            return False
        return True