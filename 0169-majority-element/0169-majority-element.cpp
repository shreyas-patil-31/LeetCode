class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> maxi;
        for(int i=0;i<nums.size();i++){
            maxi[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        int maxu = 0;
        int ans;
        for(it=maxi.begin();it!=maxi.end();it++){
            if(it->second>maxu){
                maxu = it->second;
                ans = it->first;
            }
        }
        return ans;
    }
};