class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<int> last(256, -1);
        int maxLen = 0, i = 0;

        for(int j = 0; j < s.length(); j++) {
            if(last[s[j]] >= i)
                i = last[s[j]] + 1;

            last[s[j]] = j;
            maxLen = std::max(maxLen, j - i + 1);
        }
        return maxLen;
    }
};