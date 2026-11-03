class Solution:
    def minMoves2(self, nums: list[int]) -> int:
        moves = 0
        nums.sort()
        mid = len(nums)//2
        for i in range(len(nums)):
            moves += abs(nums[i] - nums[mid])

        return moves