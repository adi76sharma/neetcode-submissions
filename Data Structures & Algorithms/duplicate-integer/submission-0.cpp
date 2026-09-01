class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> l;
        for(int i:nums){
            l[i]++;
        }
        for(auto i:l){
            if(i.second >= 2){
                return true;
            }
        }
        return false;
    }
};