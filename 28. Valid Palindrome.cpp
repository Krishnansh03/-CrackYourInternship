class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0, j = s.size();

        if(j == 0 || j == 1)    return true;
        while(i <=j){
            if(!iswalnum(s[i]))      {i++;    continue;}
            if(!iswalnum(s[j]))      {j--;    continue;}

            if(tolower(s[i]) != tolower(s[j]))    return false;

            else {i++;    j--;}
        }
        return true;
        
    }
};