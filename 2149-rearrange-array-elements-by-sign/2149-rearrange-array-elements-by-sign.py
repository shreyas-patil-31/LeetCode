class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        ans = [0]*len(nums)
        p = 0
        q = 1
        for i in nums:
            if i>0:
                ans[p] = i
                p += 2
            else:
                ans[q] = i
                q += 2
        return ans