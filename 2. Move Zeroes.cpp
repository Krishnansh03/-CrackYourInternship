class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int fp = 0,rp = 0;
        
        for(int i = 0; i < nums.size(); i++){

            if(nums[i] != 0){

                swap(nums[fp],nums[rp]);
                fp++;
                rp++;
                
            }
            else{
                 rp++;
                 
            }

        }
        
    }
};