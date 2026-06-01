class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        std::vector<pair<int, int>> org;
        for (int i = 0; i < nums.size(); i++) org.push_back({nums[i], i});
        std::sort(org.begin(), org.end());
        while (left < right) {
            int sum = org[left].first + org[right].first;
            if (sum < target) left++;
            else if (sum > target) right--;
            else return {org[left].second, org[right].second};
        } return {-1, -1};
    }
};