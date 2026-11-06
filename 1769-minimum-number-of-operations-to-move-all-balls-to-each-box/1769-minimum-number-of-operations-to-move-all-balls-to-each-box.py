class Solution:
    def minOperations(self, boxes: str) -> list[int]:
        digits = list(map(int, boxes))

        ans = []

        for i in range(len(digits)):
            k = 0

            for j in range(len(digits)):
                if digits[j] == 1:
                    k += abs(i-j)

            ans.append(k)
        return ans

                