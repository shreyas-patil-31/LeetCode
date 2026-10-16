class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        temp = x
        sum = 0
        while temp>0:
            sum += temp%10
            temp//=10
        if x%sum==0:
            return sum
        return -1