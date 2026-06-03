class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = n - 1;
        std::vector<int> sqrs(n);
        int k = n - 1;

        while(i <= j) {
            if(abs(arr[i]) > abs(arr[j])) {
                sqrs[k--] = arr[i]*arr[i];
                i++;
            } else {
                sqrs[k--] = arr[j]*arr[j];
                j--;
            }
        } return sqrs; 
    }
};