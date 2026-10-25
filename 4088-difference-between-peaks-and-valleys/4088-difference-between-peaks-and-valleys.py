class Solution:
    def peakValleyDifference(self, nums: list[int]) -> int:
        n = len(nums)-1
        sum_peak = 0
        sum_valley = 0
        for i in range(1,n):
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1]):
                sum_peak += nums[i]
            elif(nums[i]<nums[i-1] and nums[i]<nums[i+1]):
                sum_valley += nums[i]
        return (sum_peak - sum_valley)