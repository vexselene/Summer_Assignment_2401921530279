class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> st;
        for(int x : nums) {
            if(st.count(x)) return true;
            st.insert(x);
        } return false;
    }
};