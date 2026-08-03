class Solution {
public:
    int digitFrequencyScore(int n) {
        int s = 0;
        vector<int> v;
        unordered_map<int, int> f;
        while(n>0){
            int x = n%10;
            v.push_back(x);
            n /= 10;
        }
        unordered_map<int, int>::iterator it;
        for(int i=0;i<v.size();i++){
            f[v[i]]++;
        }
        for(it=f.begin();it!=f.end();it++){
            s += it->first*it->second;
        }
        return s;
    }
};