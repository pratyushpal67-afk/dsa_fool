class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> frequency(k, 0);
        frequency[0] = 1;

        int prefixSum = 0;
        int total = 0;

        for (int num : nums) {
            prefixSum += num;

            int remainder = prefixSum % k;

            if (remainder < 0) {
                remainder += k;
            }

            total += frequency[remainder];
            frequency[remainder]++;
        }

        return total;
    }
};