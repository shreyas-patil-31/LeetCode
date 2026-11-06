class Solution:
    def totalWaviness(self, num1: int, num2: int) -> int:
        wave = 0
        i = num1
        while i<=num2:
            digits = list(map(int, str(i)))
            j = 1
            while(j<len(digits)-1):
                if digits[j]<digits[j+1] and digits[j]<digits[j-1]:
                    wave += 1
                    j += 1
                elif digits[j]>digits[j+1] and digits[j]>digits[j-1]:
                    wave += 1
                    j += 1
                else:
                    j += 1
            i += 1
        return wave
