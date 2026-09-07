class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> v = nums;
        for(int i=0;i<nums.size();i++){
            int k = nums[i];
            int dig = 0;
            while(k>0){
                int x = k%10;
                dig = dig*10 + x;
                k /= 10;
            }
            v.push_back(dig);
        }
        unordered_set<int> st;

    for (int x : v) {
        st.insert(x);
    }

    return st.size();
    }
};