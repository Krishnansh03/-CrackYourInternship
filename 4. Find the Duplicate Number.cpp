// https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int out =0;
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){

            if(nums[i] == nums [i-1])
                return nums[i];
        }

        return 0;
    }
};