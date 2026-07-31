class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            v.push_back(count);
            if(nums[i]==0){
                count = 0;
            }
        }
        int max = *max_element(v.begin(),v.end());
        return max;
    }
};