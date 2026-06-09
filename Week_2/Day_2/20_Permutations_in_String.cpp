class Solution {
private:
    bool matches(int target[], int window[]) {
        for(int i = 0; i < 26; i++) {
            if(target[i] != window[i]) return false;
        } return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        int target[26] = {0};
        int window[26] = {0};

        for(char c : s1) target[c - 'a']++;
        for(int i = 0; i < s1.length(); i++) window[s2[i] - 'a']++;

        if(matches(target, window)) return true;

        for(int i = s1.length(); i < s2.length(); i++) {
            window[s2[i] - 'a']++;
            window[s2[i - s1.length()] - 'a']--;

            if(matches(target, window)) return true;
        } return false;
    }
};