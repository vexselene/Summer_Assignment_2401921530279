class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        
        for (std::string s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                if (s == "+") st.push(a + b);
                else if (s == "-") st.push(a - b);
                else if (s == "*") st.push(a * b);
                else if (s == "/") st.push(a / b);
            } else {
                st.push(std::stoi(s));
            }
        }
        
        return st.top();
    }
};