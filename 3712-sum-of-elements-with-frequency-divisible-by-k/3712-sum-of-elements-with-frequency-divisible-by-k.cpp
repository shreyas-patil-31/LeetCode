class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int, int> frq;
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        for(it=frq.begin();it!=frq.end();it++){
            if(it->second%k==0){
                sum = sum + it->first*it->second;
            }
        }
        return sum;
    }
};