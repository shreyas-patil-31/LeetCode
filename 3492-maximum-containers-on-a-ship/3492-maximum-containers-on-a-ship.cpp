class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int count = 0;
        if(maxWeight<w){
            return 0;
        }
        if(n<2){
            return n;
        }
        for(int i=0;i<n*n;i++){
            if(maxWeight>=w){
                count++;
                maxWeight -= w;
            }
        }
        return count;
    }
};