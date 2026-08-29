class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double> v;
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            double k = (nums[i] + nums[j])/2.0;
            v.push_back(k);
            i++;
            j--;
        }
        double sum = *min_element(v.begin(),v.end());
        return sum;
    }
};