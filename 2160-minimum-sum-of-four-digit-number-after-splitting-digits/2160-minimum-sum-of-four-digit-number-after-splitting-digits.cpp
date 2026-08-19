class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num>0){
            int x = num%10;
           v.push_back(x);
           num/=10;
        }
        sort(v.begin(),v.end());
        swap(v[1],v[2]);
        int num1 = v[0]*10 + v[1];
        int num2 = v[2]*10 + v[3];
        int ans = num1+num2;
        return ans;
    }
};