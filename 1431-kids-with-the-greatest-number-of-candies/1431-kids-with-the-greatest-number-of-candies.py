class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        result = []
        k = max(candies)
        maxi = k - extraCandies
        for i in candies:
            if i>=maxi:
                result.append(True)
            else:
                result.append(False)
        return result
