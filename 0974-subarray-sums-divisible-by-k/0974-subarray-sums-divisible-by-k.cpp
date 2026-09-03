class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        int sum = 0;
        int count = 0;
        mpp[0] = 1;

        for(int num : nums) {
            sum += num;

            int rem = sum % k;
            if (rem < 0) rem += k;

            if(mpp.find(rem) != mpp.end()) count += mpp[rem];
            mpp[rem]++;
        }
        return count;
    }
};