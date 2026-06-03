class Solution{
public:
    void moveZeroes(std::vector<int> &nums) {
        int j = 0;  // points to where the next non-zero should go
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
    }
};