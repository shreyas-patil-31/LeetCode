class Solution:
    def convertTemperature(self, celsius: float) -> list[float]:
        a = celsius + 273.15
        b = celsius*1.80 + 32.00
        k = [a, b]
        return k