class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (!std::isalnum((unsigned char)s[left])) {
                left++;
            } else if (!std::isalnum((unsigned char)s[right])) {
                right--;
            } else if ((s[left] | 32) != (s[right] | 32)) {
                return false;
            } else {
                left++;
                right--;
            }
        } return true;
    }
};