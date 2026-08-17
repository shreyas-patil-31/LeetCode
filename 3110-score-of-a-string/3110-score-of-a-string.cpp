class Solution {
public:
    int scoreOfString(string s) {
        int i = 0;
        int j = i+1;
        int sum = 0;
        while(j<s.size()){
            sum += abs((int)s[i] - (int)s[j]);
            i++;
            j++;
        }
        return sum;
    }
};