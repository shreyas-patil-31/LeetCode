class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        for(int i=0;i<piles.size();i++){
            if(piles[i]==0){
                return false;
            }
        }
        return true;
    }
};