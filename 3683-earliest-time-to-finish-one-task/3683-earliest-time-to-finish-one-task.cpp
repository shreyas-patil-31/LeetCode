class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
    int mn = INT_MAX;

    for (int i = 0; i < tasks.size(); i++) {
        int x = tasks[i][0] + tasks[i][1];
        mn = min(mn, x);
    }

    return mn;
}
};