class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stk1;
        
        for(char c : s) {
            if(stk1.empty()) {
                stk1.push({c, 1});
            } else {
                auto top = stk1.top();
                char prev = top.first;
                int streak = top.second;
                if(prev == c) {
                    stk1.pop();
                    int newStreak = streak + 1;
                    if(newStreak < k) {
                        stk1.push({c, newStreak});
                    }
                } else {
                    stk1.push({c, 1});
                }
            }
        }
        
        string ans = "";
        while(!stk1.empty()) {
            auto top = stk1.top();
            stk1.pop();
            char c = top.first;
            int howMany = top.second;
            for(int i = 0; i < howMany; i++) {
                ans += c;
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};