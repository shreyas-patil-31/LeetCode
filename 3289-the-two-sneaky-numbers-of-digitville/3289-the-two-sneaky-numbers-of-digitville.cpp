class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> v;
        for(int i = 0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        for(it=freq.begin();it!=freq.end();it++){
            if(it->second>1){
                int ans = it->first;
                v.push_back(ans);
            }
        }
        return v;
    }
};