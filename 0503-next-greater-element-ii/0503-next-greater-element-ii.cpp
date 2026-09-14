class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int j;

            for(j = i + 1; j < i + n; j++) {
                int idx = j % n;

                if(nums[idx] > nums[i]) {
                    ans.push_back(nums[idx]);
                    break;
                }
            }

            if(j == i + n)
                ans.push_back(-1);
        }

        return ans;
    }
};