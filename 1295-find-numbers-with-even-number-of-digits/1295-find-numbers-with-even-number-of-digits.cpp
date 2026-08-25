class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int count1 = 0;
            int x = nums[i];
            while(x>0){
                int k = x%10;
                count1++;
                x /= 10;
            }
            if(count1%2==0){
                count++;
            }
            count1 = 0;
        }
        return count;
    }
};