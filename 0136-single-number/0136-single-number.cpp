class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int ans;
        unordered_map<int, int>::iterator it;
        for(it=freq.begin();it!=freq.end();it++){
            if(it->second==1){
                ans = it->first;
            }
        }
        return ans;
    }
};