class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mpp;
        for(int i = 0; i < words.size(); i++) {
            mpp[words[i]]++;
        }

        vector<vector<string>> bucket(words.size() + 1);

        for (auto it : mpp) {
            bucket[it.second].push_back(it.first);
        }

        vector<string> ans;

        for (int i = 0; i < bucket.size(); i++) {
            sort(bucket[i].begin(), bucket[i].end());
        }
        
        for (int i = bucket.size() - 1; i > 0; i--) {
            for (string x : bucket[i]) {
                ans.push_back(x);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};