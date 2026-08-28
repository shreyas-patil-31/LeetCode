class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int n = height.size()-1;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(height[i]>threshold){
                v.push_back(i+1);
            }
        }
        return v;
    }
};