// https://leetcode.com/problems/power-of-two/description/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n == INT_MIN)    return false;       // To Handle int-overflow error as INT_MIN-1 will flow outside integer limit.
        
        return(n && (!(n & (n-1))));            // Notice 8(1000) & 7(0111) their all bit are diff,hence (2powX & 2powX - 1) will give 0
    }
};