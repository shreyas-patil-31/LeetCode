class Solution:
    def minMoves(self, nums: List[int]) -> int:
        moves = 0
        maxi = max(nums)
        for i in nums:
            moves += maxi - i
        
        return moves