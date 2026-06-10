class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        std::string doubled = s + s;
        return doubled.substr(1, doubled.length() - 2).find(s) != std::string::npos;
    }
};