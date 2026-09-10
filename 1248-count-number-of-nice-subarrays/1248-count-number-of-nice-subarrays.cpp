class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int oddc = 0;
        int ans = 0;
        mpp[0] = 1;
        for(int num : nums) {
            if(num % 2 != 0) oddc++;
            if(mpp.find(oddc - k) != mpp.end()) ans += mpp[oddc - k];
            mpp[oddc]++;
        }
        return ans;
    }
};