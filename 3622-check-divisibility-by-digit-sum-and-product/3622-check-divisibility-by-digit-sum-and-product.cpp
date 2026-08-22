class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        int k = n;
        while(k>0){
            int x = k%10;
            sum += x;
            pro *= x;
            k /= 10; 
        }
        int sum1 = sum + pro;
        if(n%sum1==0){
            return true;
        }
        return false;
    }
};