class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         int k = arr[1] - arr[0];
        bool flag = true;
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1])!=k){
                flag = false;
            }
        }
        if(flag==true){
            return true;
        }
        return false;
    }
};