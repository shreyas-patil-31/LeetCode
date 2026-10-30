class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        count = 0
        ans = 0
        for i in range(len(nums)):
            if(nums[i]==0):
                ans = max(ans, count)
                count = 0
            else:
                count += 1
        return max(ans, count)