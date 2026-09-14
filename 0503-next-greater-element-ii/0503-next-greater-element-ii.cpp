class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, -1);
        stack<int> nge;
        for (int i = 2 * n - 1; i >= 0; i--) {
            int ind = i % n;
            while (!nge.empty() && nge.top() <= nums[ind]) {
                nge.pop();
            }
            if (!nge.empty() && i < n) {
                res[i] = nge.top();
            }
            nge.push(nums[ind]);
        }
        return res;
    }
};