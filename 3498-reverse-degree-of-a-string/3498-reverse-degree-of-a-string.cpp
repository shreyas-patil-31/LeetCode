class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++){
            int x = 26 - (s[i] - 'a');
            int ans = x * (i+1);
            sum += ans;
        }
        return sum;
    }
};