class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            int sum = 0;
            while(x>0){
                int k = x%10;
                sum += k;
                x /= 10;
            }
            v.push_back(sum);
        }
        int ans = *min_element(v.begin(),v.end());
        return ans;
    }
};