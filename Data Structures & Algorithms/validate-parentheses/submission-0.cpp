class Solution {
public:
    bool isValid(string s) {
        stack<char> h;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                h.push(c);
            }
            else {
                if (h.empty()) return false;

                if (c == ')' && h.top() != '(') return false;
                if (c == '}' && h.top() != '{') return false;
                if (c == ']' && h.top() != '[') return false;

                h.pop();
            }
        }

        return h.empty();
    }
};
