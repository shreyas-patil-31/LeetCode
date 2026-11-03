class Solution:
    def minMoves2(self, nums: list[int]) -> int:
        moves = 0
        nums.sort()
        n = len(nums)
        mid = n//2
        for i in range(n//2):
            moves += abs(nums[i] - nums[mid])
            moves += abs(nums[n-i-1] - nums[mid])

        return moves