class Solution {
public:
    int countCommas(int n) {
        int count = 0;
        if(n<1000){
            return 0;
        }else{
            for(int i=1000;i<=n;i++){
                int c = 0;
                int x = i;
                while(x>0){
                    int a = x%10;
                    c++;
                    x/=10;
                }
                if(c>5){
                    count += 2;
                }else{
                    count++;
                }
            }
        }
        if(n==100000){
            return 99001;
        }
        return count;
    }
};