class Solution:
    def minMoves(self, nums: list[int]) -> int:
        moves = 0
        mini = min(nums)
        for i in nums:
            moves += i - mini
        
        return moves
            