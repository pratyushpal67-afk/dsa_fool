class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            map<char, int> mpp;
            for(int j = i; j < s.size(); j++) {
                mpp[s[j]]++;

                int mostFreqChar = INT_MIN;
                int leastFreqChar = INT_MAX;

                for(auto &it : mpp) {
                    mostFreqChar = max(mostFreqChar, it.second);
                    leastFreqChar = min(leastFreqChar, it.second);
                }
                ans += mostFreqChar - leastFreqChar;
            }
        }
        return ans;
    }
};