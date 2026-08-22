class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p = abs(z - x);
        int q = abs(z - y);
        if(p==q){
            return 0;
        }else if(p<q){
            return 1;
        }
        return 2;
    }
};