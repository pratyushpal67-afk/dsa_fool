class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tem) {
        vector<int> days(tem.size(), 0);
        stack<int> s;
        for(int i = 0; i < tem.size(); i++) {
            while(!s.empty() && tem[i] > tem[s.top()]) {
                int prev = s.top();
                s.pop();
                days[prev] = i - prev;
            }
            s.push(i);
        }
        return days;
    }
};