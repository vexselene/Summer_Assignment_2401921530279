using std::stack;
using std::unordered_map;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mp = {{')','('}, 
                                        {'}','{'}, 
                                        {']','['}};

        for(char c : s) {
            if(mp.count(c) == 0) { // if not a cosing bracket
                stk.push(c);
            } else {
                if(stk.empty() || stk.top() != mp[c]) return false;
                stk.pop();
            }
        }

        return stk.empty();
    }
};