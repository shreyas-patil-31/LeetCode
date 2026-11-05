class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        x = []
        y = []
        ans =[]
        for i in nums:
            if i>0:
                x.append(i)
            else:
                y.append(i)
        i = 0
        j = 0
        while i<len(x) and j<len(y):
            ans.append(x[i])
            ans.append(y[j])
            i += 1
            j += 1
        return ans
