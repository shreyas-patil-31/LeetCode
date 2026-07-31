class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v = nums;
        for(int i=0;i<v.size();i++){
            int k = v[i];
            nums.push_back(k);
        }
        return nums;
    }
};