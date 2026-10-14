class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        temp = n
        sum = 0
        pro = 1
        while(temp>0):
            x = temp%10
            sum += x
            pro *= x
            temp//=10
        
        return pro - sum
