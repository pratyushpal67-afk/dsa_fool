class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxFreq = 0;
        int maxLen = 0;

        vector<int> count(26, 0);

        for(int i = 0; i < s.size(); i++){
            count[s[i] - 'A']++;
            maxFreq = max(maxFreq, count[s[i] - 'A']);
            if ((i - l + 1) - maxFreq > k) {
                count[s[l] - 'A']--;
                l++;
            }
            maxLen = max(maxLen, i - l + 1);
        }
        return maxLen;
    }
};