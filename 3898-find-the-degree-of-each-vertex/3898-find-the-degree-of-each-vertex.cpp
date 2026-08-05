class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int count = 0;
        vector<int> v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1){
                    count++;
                }
            }
            v.push_back(count);
                count = 0;
        }
        return v;
    }
};