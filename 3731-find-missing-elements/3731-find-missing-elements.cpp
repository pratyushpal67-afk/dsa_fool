class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxEt = *max_element(nums.begin(), nums.end());
        int minEt = *min_element(nums.begin(), nums.end());
        
        vector<bool> exists(maxEt - minEt + 1);
        for(int &i : nums) exists[i - minEt] = true;
        
        vector<int> ans;
        for(int i = 0; i < maxEt - minEt; ++i) {
            if(!exists[i]) {
                ans.push_back(i +minEt);
            }
        }
        return ans;
    }
};