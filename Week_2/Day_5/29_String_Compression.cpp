class Solution {
private:
    std::vector<int> count_digits(int count) {
        std::vector<int> digits;
        while (count > 0) {
            digits.push_back(count % 10);
            count = count / 10;
        }
        std::reverse(digits.begin(), digits.end());
        return digits;
    }
    
public:
    int compress(vector<char>& chars) {
        int i = 0;  // Write position
        int n = chars.size();
        int j = 0;  // Read position
        
        while (j < n) {
            char current = chars[j];
            int count = 0;
            
            while (j < n && chars[j] == current) {
                count++;
                j++;
            }
            
            chars[i++] = current;
            
            if (count > 1) {
                std::vector<int> digits = count_digits(count);
                for (int digit : digits) {
                    chars[i++] = digit + '0';
                }
            }
        } return i;
    }
};