class Solution:
    def maxFreqSum(self, s: str) -> int:
        sum1 = 0
        sum2 = 0
        freq = {}
        for i in s:
            if i in freq:
               freq[i] += 1
            else:
               freq[i] = 1

        for key, value in freq.items():
            if (key=='a' or key=='e' or key=='i' or key=='o' or key=='u'):
                sum1 = max(sum1, value)
            else:
                sum2 = max(sum2, value)

        return sum1 + sum2

