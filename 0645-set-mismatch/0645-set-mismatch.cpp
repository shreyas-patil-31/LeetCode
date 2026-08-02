class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v;
        int k;
        int n = nums.size();
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]){
            k = nums[i];
            v.push_back(k);
        }
    }
        int sum = (n*(n+1))/2;
        int x = accumulate(nums.begin(),nums.end(),0);
        int ans = (sum - x) + k;
        v.push_back(ans);
        return v;
        
    }
};