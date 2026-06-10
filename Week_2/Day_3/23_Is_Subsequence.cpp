class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.length();
        int m = s.length();
        
        if (m == 0) return true;
        if (n < m) return false;

        int i = 0, j = 0;
        while(i < n) {
            if(s[j] == t[i]) {
                j++;
            }
            if(j == m) return true;
            i++;
        } return false;
    }
};