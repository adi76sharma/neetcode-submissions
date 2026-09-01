class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> o;
        unordered_map<char,int> j;
        for(char x:s)o[x]++;
        for(char y:t)j[y]++;
        if(o==j)return true;
        return false;
    }
};
