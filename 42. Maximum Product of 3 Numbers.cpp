// https://leetcode.com/problems/maximum-product-of-three-numbers/description/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int s1 = nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3];
        int s2 = nums[nums.size() - 1] * nums[0] * nums[1];

        return max(s1,s2);
    }
};