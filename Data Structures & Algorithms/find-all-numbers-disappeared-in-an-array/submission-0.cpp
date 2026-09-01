class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> h(nums.size());

        for(int i : nums) {
            h[i - 1]++;
        }

        vector<int> ans;

        for(int i = 0; i < h.size(); i++) {
            if(h[i] == 0) {
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};