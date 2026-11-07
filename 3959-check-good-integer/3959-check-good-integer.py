class Solution:
    def checkGoodInteger(self, n: int) -> bool:
        Sum = 0
        Squaresum = 0
        while n>0:
            x = n%10
            Sum += x
            Squaresum += x**2
            n //= 10

        if Squaresum - Sum >= 50:
            return True
        return False