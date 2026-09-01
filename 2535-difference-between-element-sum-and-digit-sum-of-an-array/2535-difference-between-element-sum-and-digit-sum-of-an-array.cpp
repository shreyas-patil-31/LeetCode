class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            int k = nums[i];
            while(k>0){
                int x = k%10;
                sum += x;
                k /= 10;
            }
        }
        int ogsum = accumulate(nums.begin(),nums.end(),0);
        int ans = abs(ogsum-sum);
        return ans;
    }
};