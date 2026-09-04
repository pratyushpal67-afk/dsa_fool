class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        unordered_map<int, int> mpp;

        int sum = 0;
        int count = 0;
        mpp[0] = 1;
        int MOD = 1'000'000'007;

        for(int num : arr) {
            sum += num;
            int r = sum % 2;
            if(r == 1) count += mpp[0];
            else count += mpp[1];
            count = count % MOD;
            mpp[r]++;
        }
        return count;
    }
};