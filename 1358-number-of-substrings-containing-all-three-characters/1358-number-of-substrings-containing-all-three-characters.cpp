class Solution {
public:
    int numberOfSubstrings(string s) {

        int l = 0, ans = 0;
        vector<int> count(3, 0);

        for(int r = 0; r < s.size(); r++) {

            count[s[r] - 'a']++;

            while(count[0] > 0 && count[1] > 0 && count[2] > 0) {

                ans += s.size() - r;
                count[s[l] - 'a']--;

                l++;
            }
        } 
        return ans;
    }
};