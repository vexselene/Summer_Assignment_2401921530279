class Solution {
private:
    bool matches(int target[26], int window[26]) {
        for(int i = 0; i < 26; i++) {
            if(target[i] != window[i]) return false;
        } return true;
    }
public:
    vector<int> findAnagrams(string s, string p) {
        std::vector<int> indices;
        if(p.length() > s.length()) return indices;
        
        int target[26] = {0};
        int window[26] = {0};
        
        for(char c : p) target[c - 'a']++;
        for(int i = 0; i < p.length(); i++) window[s[i] - 'a']++;
        
        if(matches(target, window)) indices.push_back(0);

        for(int i = p.length(); i < s.length(); i++) {
            window[s[i] - 'a']++;
            window[s[i - p.length()] - 'a']--;

            if(matches(target, window)) indices.push_back(i - p.length() + 1);
        } return indices;
    }
};