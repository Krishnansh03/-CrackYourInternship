class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;
        for(auto x : nums){
            int pos = abs(x);
            if(nums[pos-1] < 0){
                ans.push_back(pos);
            }
            nums[pos-1] = -1 * nums[pos-1];
           
        }

        return ans;
        
    }
};