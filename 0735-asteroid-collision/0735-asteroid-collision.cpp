class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for(int i : asteroids) {
            bool yes = false;
            while(!ans.empty() && ans.back() > 0 && i < 0) {
                if(ans.back() < abs(i)) ans.pop_back();
                else {
                    if(ans.back() == abs(i)) ans.pop_back();
                    yes = !yes;
                    break;
                }
            }
            if(!yes) ans.push_back(i);
        }
        return ans;
    }
};