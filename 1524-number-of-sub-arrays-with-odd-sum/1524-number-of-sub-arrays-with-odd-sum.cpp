class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long count = 0, sum = 0;
        for(int n : arr) {
            sum += n;
            count += sum % 2;
        }
        count += (arr.size() - count) * count;
        return count % 1'000'000'007;
    }
};