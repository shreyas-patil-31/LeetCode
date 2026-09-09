class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        for(it=freq.begin();it!=freq.end();it++){
            if(it->second>1){
                v.push_back(it->first);
            }
        }
        return v;
    }
};