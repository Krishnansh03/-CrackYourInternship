//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 1, k = 0, n = nums.size();

        while(i < nums.size()){

            if(nums[i - 1] == nums[i]){
                nums.erase(nums.begin() + (i));
                k++;
            }

            if(nums[i-1] != nums[i])
                i++;
        }

        return (n - k);
        
    }
};