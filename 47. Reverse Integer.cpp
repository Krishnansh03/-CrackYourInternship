// https://leetcode.com/problems/reverse-integer/submissions/

class Solution {
public:
    int reverse(int x) {

        long rev = 0;
        while(x){
            rev = (rev*10) + (x%10);
            x/=10;
        }
        return (rev <= INT_MAX && rev >= INT_MIN) ? rev : 0;        // Handling Overflow
    }
};