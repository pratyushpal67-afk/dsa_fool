class Solution {
public:

    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> mp1(26,0);
        vector<int> mp2(26,0);
        for(char c : s1) mp1[c - 'a']++;
        int n = s1.size();
        for(int i = 0; i < s2.size();  i++){
            mp2[s2[i] - 'a']++;
            if(i>=n) mp2[s2[i-n] - 'a']--;
            if(mp1 == mp2) return true;
            
        }
        return false;
    }    
};