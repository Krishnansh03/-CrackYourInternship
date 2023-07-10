// Using bruteforce

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            for (int j = i+1; j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target && i!=j)
                {
                   return {i,j};
            }
    }
        
    }
        return {};
    }
};

// Using Hashset

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       unordered_map<int,int> v;

       for(int i = 0; i < nums.size(); i++){

           if(v.find(target - nums[i]) == v.end()){

               v[nums[i]] = i;
           }
           else{
               return {v[target - nums[i]], i};
           }
       }

       return{};
    }
};