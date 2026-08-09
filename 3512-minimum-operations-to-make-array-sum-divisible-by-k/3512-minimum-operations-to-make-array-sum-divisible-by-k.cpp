class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int x;
        if(sum<k){
            return sum;
        }
        else if(sum%k==0){
            return 0;
        }
        else if(sum>k && sum%k!=0){
         x = sum%k;
        }
        return x;   
    }
};