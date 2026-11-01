class Solution {
public:
    long long minMergedInteger(vector<int>& nums) {
        long long ans = LLONG_MAX;

        for(int i = 0; i < nums.size(); i += 2) {
            string a = to_string(nums[i]);
            string b = to_string(nums[i+1]);

            string s = a + b;
            ans = min(ans, stoll(s));
        }

        return ans;
    }
};