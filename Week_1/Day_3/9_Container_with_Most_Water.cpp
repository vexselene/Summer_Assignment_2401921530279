class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxarea = 0, area;
        while (left < right) {
            area = (right - left) * (std::min(height[left], height[right]));
            maxarea = std::max(area, maxarea);
            if (height[left] <= height[right]) left++;
            else right--;
        } return maxarea;
    }
};