class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int x = nums[i]%10;
                if(x==digit){
                    count++;
                    nums[i] /= 10;
                }else{
                    nums[i] /= 10;
                }
            }
        }
        return count;
    }
};