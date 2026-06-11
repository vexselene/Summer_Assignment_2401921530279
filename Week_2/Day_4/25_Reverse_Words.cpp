class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        
        while (i < n) {
            int start = i;
            while (i < n && s[i] != ' ') {
                i++;
            }

            int left = start, right = i - 1;
            while (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
            
            i++;
        } return s;
    }
};