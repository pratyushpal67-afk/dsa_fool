class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        
        for (int num : nums) {
            mpp[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto it : mpp) {
            bucket[it.second].push_back(it.first);
        }

        vector<int> ans;

        for (int i = bucket.size() - 1; i > 0; i--) {
            for (int x : bucket[i]) {
                ans.push_back(x);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};