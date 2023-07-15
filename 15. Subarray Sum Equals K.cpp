// BruteForce(will cause TLE){3 Loops}

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int res = 0, n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int sum = 0;
                for(int p = i; p <= j; p++){
                    sum += nums[p];   
                }
                if(sum == k)
                    res++;
            }
        }
        return res;  
    }
};

// slightly Optimal (still gives TLE){2 Loops}

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int res = 0, n = nums.size();

        for(int i = 0; i < n; i++){
            
            int sum = nums[i];
            
            for(int j = i; j < n; j++){
                
                sum += nums[j];                  
                if(sum == k)
                  res++;
            }     
       }
       return res;  
    }
};

 [1,1,1,1,1,1,1,1]      4
0 1 2 3 4 5 6 7 8

// Optimal (using Hashset)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int count = 0, n = nums.size();
        unordered_map<int,int> mp;  // <prefixsum,count>
        int prefix = 0;
        mp[0] ++;
        for(int i = 0; i < n; i++){

            prefix += nums[i];
            count += mp[prefix - k];
            //mp[prefix - k] ++;
            mp[prefix]++; 
              
        }
       return count;  
    }
};