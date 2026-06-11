class Solution {
public:
    string decodeString(string s) {
        std::stack<int> nums;
        std::stack<std::string> string_stack;
        std::string current = "";
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num*10 + (c - '0');
            } else if (c == '[') {
                nums.push(num);
                string_stack.push(current);
                num = 0;
                current = "";
            } else if (c == ']') {
                int repeat = nums.top(); nums.pop();
                std::string temp = current;
                current = string_stack.top(); string_stack.pop();
                for(int i = 0; i < repeat; i++) {
                    current += temp;
                }
            } else {
                current += c;
            }
        }
        return current;
    }
};