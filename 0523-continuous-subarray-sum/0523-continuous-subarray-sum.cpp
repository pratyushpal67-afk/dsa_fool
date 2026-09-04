class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        int sum = 0;
        mpp[0] = -1;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int r = sum % k;

            if(mpp.find(r) != mpp.end()) {
                if(i - mpp[r] >= 2)
                    return true;
            }
            else {
                mpp[r] = i;
            }
        }

        return false;
    }
};