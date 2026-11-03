class Solution:
    def minMoves2(self, nums: list[int]) -> int:
        moves = 0
        nums.sort()
        mid = len(nums)//2
        for i in range(len(nums)):
            if nums[i] <= nums[mid]:
                moves += nums[mid] - nums[i]
            else:
                moves += nums[i] - nums[mid]

        return moves