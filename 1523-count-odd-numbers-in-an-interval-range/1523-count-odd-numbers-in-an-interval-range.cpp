class Solution {
public:
    int countOdds(int low, int high) {
        int res = 0;

        if (low % 2 || high % 2) {
            res++;
        }
        res += (high - low) / 2;
        return res;
    }
};