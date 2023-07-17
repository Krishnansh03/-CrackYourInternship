//using hashmap TC: O(n)    SC: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> mp;
        int n = nums.size()-1;

        for(auto x : nums){
            mp[x]++;

            if(mp[x] > n/ 2)    return x;
        }

        return 0;
        
    }
};

// Optimized(using O(1) space){using Moore voting algo}

// MOORE VOTING ALGO : It work on fact that if an element occur more than n/2 times all other element occur less than n/2 times 
//                     hence we decrease count with each diff element and vice versa

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // using Moore voting Algo

        int count = 0, cand = nums[0], n = nums.size();

        for(int i = 0; i < n; i++){
            
            if(count == 0)  cand = nums[i];
            count+=(cand == nums[i]) ? 1 : -1;
            
        }

        return cand;        
    }
};