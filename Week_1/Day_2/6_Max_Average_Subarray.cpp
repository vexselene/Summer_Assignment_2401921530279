class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, j = 0;
        double sum = 0, avg_max = 0;
        for(; j < k; j++) sum += nums[j];
        avg_max = sum / k;
        while(j < nums.size()) {
            sum += nums[j++];
            sum -= nums[i++];
            avg_max = std::max(avg_max, sum / k);
        } return avg_max;
    }
};