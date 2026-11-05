class Solution:
    def findTheDistanceValue(self, arr1: list[int], arr2: list[int], d: int) -> int:
        ok = True
        count = 0
        for i in arr1:
            for j in arr2:
                if abs(i - j)<=d:
                    ok = False
            if ok:
                count += 1
            ok = True
        return count