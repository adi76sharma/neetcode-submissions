class Solution {
public:
    int minOperations(string s) {

        int n = s.size();

        int changes0 = 0; // target starts with 0
        int changes1 = 0; // target starts with 1

        for(int i = 0; i < n; i++) {

            char expected0 = (i % 2 == 0) ? '0' : '1';
            char expected1 = (i % 2 == 0) ? '1' : '0';

            if(s[i] != expected0)
                changes0++;

            if(s[i] != expected1)
                changes1++;
        }

        return min(changes0, changes1);
    }
};