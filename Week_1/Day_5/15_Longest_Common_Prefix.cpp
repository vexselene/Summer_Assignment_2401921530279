class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        std::string prefix = strs[0];
        // time: O(S); where S = total number of characters across all strings
        for (int i = 1; i < strs.size(); ++i) {
            while (strs[i].find(prefix) != 0) { // prefix not at start so shrink it
                prefix.pop_back();              // shrink prefix
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};