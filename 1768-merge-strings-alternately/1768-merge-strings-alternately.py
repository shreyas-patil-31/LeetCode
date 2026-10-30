class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = []
        i = 0
        j = 0
        word = 1
        while(i<len(word1) and j<len(word2)):
            if word==1:
                ans.append(word1[i])
                i += 1
                word = 2
            else:
                ans.append(word2[j])
                j += 1
                word = 1
        
        while i<len(word1):
            ans.append(word1[i])
            i += 1

        while j<len(word2):
            ans.append(word2[j])
            j += 1

        return "".join(ans)

