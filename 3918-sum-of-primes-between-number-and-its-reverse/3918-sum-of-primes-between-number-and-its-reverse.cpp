class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int k = n;
        int rev = 0;
        while(k>0){
            int x = k%10;
            rev = rev*10 + x;
            k/=10;
        }
        int sum = 0;
        int low = min(rev,n);
        int high = max(rev,n);
        if(low<2){
            low = 2;
        }
        for(int i=low;i<=high;i++){
            bool flag = true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    flag = false;
                }
            }
            if(flag){
                sum += i;
            }
        }
        return sum;
    }
};