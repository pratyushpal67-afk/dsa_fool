class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.size(); i++) {
            if(mpp[s[i]] > 0) return s[i];
            mpp[s[i]]++;
        }
        return 0;
    }
};