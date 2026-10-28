class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int r = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i-1] == nums[i]) r++;
        }
        return r;
    }
};