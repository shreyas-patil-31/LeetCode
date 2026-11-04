class Solution:
    def countDigitOccurrences(self, nums: list[int], digit: int) -> int:
        count = 0
        for i in nums:
            k = i
            while(k>0):
                x = k%10
                if x==digit:
                    count += 1
                k//=10
        return count