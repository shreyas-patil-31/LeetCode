class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        for i in range(len(nums)+1):
            if nums.count(nums[i])==1:
                return nums[i]
        return 0