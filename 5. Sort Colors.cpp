//https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int left = 0, i = 0;
        int right = nums.size() - 1;

        while(i <= right && left < right){

            if(nums[i] == 0){
                swap(nums[left], nums[i]);
                i++;
                left++;
            } else if(nums[i] == 2){

                swap(nums[right], nums[i]);
                right--;
                // i++;
            }
            else
                i++;

        }
    }    
};