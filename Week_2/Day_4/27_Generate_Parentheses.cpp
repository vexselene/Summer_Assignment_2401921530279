class Solution {
private:
    void helper(int n, vector<string>& ans, string& s, int open = 0, int close = 0) {
        if (s.length() == 2*n) {
            ans.push_back(s);
        }
        if (open < n) {
            s.push_back('(');
            helper(n, ans, s, open + 1, close);
            s.pop_back();
        }
        if (close < open) {
            s.push_back(')');
            helper(n, ans, s, open, close + 1);
            s.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> ans;
        helper(n, ans, s);
        return ans;
    }
};