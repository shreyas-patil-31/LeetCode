class Solution {
public:
    int scoreOfString(string s) {
        int i = 0;
        int j = i+1;
        vector<int> v;
        while(j<s.size()){
            int sum = abs((int)s[i] - (int)s[j]);
            v.push_back(sum);
            i++;
            j++;
        }
        int ans = accumulate(v.begin(),v.end(),0);
        return ans;
    }
};