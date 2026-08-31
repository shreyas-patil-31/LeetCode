class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum = 0;
        int squaresum = 0;
        while(n>0){
            int x = n%10;
            digitsum += x;
            squaresum += x*x;
            n /= 10; 
        }
        int ans= squaresum - digitsum;
        if(ans>=50){
            return true;
        }
        return false;
    }
};