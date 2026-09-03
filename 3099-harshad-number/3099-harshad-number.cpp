class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int k = x;
        while(k>0){
            int a= k%10;
            sum += a;
            k/=10;
        }
        if(x%sum==0){
            return sum;
        }
        return -1;
    }
};