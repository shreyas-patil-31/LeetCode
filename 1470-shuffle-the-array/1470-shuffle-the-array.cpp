class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int p = 0;
        int q = n;
        bool k = true;
        vector<int> v;
        while(q<nums.size()){
            if(k==true){
                int a = nums[p];
                v.push_back(a);
                p++;
                k = false;
            }else{
                int b = nums[q];
                v.push_back(b);
                q++;
                k = true;
            }
        } 
        return v;
    }
};