class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")return 0;
        unordered_map<char,int>m;
        int n=s.size();
        int l=0;
        int r=0;
        int ans=INT_MIN;
        while(l<n&&r<n){
            m[s[r]]++;
            while(l<n&&m[s[r]]>1){
                m[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;

        }
        return ans;
    }
};
