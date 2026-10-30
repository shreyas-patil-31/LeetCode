class Solution:
    def findClosestNumber(self, nums: list[int]) -> int:
         minimum = nums[0]
         for num in nums:
            if abs(num) < abs(minimum):
                minimum = num
            elif abs(num) == abs(minimum):
                minimum = max(num, minimum)
        
         return minimum