class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int> a, int i, int t, vector<int> c) {
        if (t == 0) {
            ans.push_back(c);
            return;
        }

        if (i == a.size() || t < 0)
            return;

        c.push_back(a[i]);
        solve(a, i, t - a[i], c);
        c.pop_back();

        solve(a, i + 1, t, c);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        solve(candidates, 0, target, curr);
        return ans;
    }
};