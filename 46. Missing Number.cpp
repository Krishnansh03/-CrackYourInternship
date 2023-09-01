// https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());

        for(int i = 0; i <= size-1; i++){
            if(nums[i] != i)    return i;
        }

        return size;
    }
};

// Using total sum approach(calculate actual expectd sum of n nos. vs the actual sum of nums    missing no would be difference bw the 2)

// https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto x: nums)   sum+=x;
        int n = nums.size();
        int totsum = (n*(n+1))/2;

        return totsum-sum;
    }
};