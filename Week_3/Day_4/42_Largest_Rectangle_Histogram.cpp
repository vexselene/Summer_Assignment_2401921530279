class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        std::stack<int> st;
        int max_area = 0;
        
        for (int i = 0; i <= n; i++) {
            int cur_h = (i == n) ? 0 : heights[i];
            
            while (!st.empty() && cur_h < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                int w = st.empty() ? i : i - st.top() - 1;
                max_area = std::max(max_area, h * w);
            }
            
            st.push(i);
        }
        
        return max_area;
    }
};