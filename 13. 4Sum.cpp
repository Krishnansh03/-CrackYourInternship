class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int p = 0; p < n; p++){
            if(p>0 && nums[p] == nums[p-1]) continue;
            for(int i = p+1; i < n; i++){
                if(i != p+1 && nums[i] == nums[i-1]) continue;
                int l = i+1, r = n -1;
                while(l < r){
                    
                    long long sum = nums[i] + nums[l];
                    sum += nums[r];
                    sum += nums[p];
                    
                    if(sum < target){
                        l++;
                    }
                    else if(sum > target){
                        r--;
                    }
                    else{

                        vector<int> temp = {nums[p], nums[i], nums[l], nums[r]};
                        ans.push_back(temp);
                        l++;
                        r--;
                        
                        while(l < r && nums[l] == nums[l-1])  l++;
                        while(l < r && nums[r] == nums[r+1]) r--;

                    }
                }
            }
        }
        return ans;
        
    }
};