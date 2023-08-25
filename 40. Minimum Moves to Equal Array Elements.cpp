// https://leetcode.com/problems/minimum-moves-to-equal-array-elements/submissions/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int res = 0;
        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            res+= nums[i] - nums[0];
        }

        return res;
    }
};