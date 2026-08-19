class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
        int sum = 0;
        while(n>0){
            int x = n%10;
            v.push_back(x);
            n /= 10;
        }
        if(v.size()%2==0){
               reverse(v.begin(),v.end()); 
            }
        for(int i=0;i<v.size();i++){
            if(i%2==0){
                sum += v[i];
            }else{
                sum -= v[i];
            }
        }
        return sum;
    }
};