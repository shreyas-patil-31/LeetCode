class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> freq;
        for(char c: s){
            freq.insert(c);
        }
        int ans = freq.size();
        return ans;
        
    }
};