// https://leetcode.com/problems/valid-number/description/

class Solution {
public:
    bool isNumber(string s) {

        

        if(isalpha(s[0]) || isalpha(s[s.length()-1]) || ((s[0] == '.' || isalpha(s[s.length()-1]) == '.') &&s.size() == 1))  return false;
        int eno = 0, dot = (s[0] == '.')?1:0;
        int n = s.size();

        if(n == 1 && !isdigit(s[0]))    return false;

        if(!isdigit(s[0]) && (s[1] == 'e' || s[1] == 'E')) return false;
        if((!isdigit(s[0]) && s[1] == '.') && n == 2)    return false;

        if((s[0] == '+' || s[0] == '-') && (s[1] == '.') && (s[2] == 'e' || s[2] == 'E'))   return false;



        for(int i = 1; i < n; i++){

            if(!isdigit(s[i]) && s[i] != '.' && s[i] != 'e' && s[i] != 'E'){
                if((s[i-1] == 'e' || s[i-1] == 'E') && (s[i] == '+' || s[i] == '-') && (i > 1 && i != n-1)) continue;
                else    return false;
            }

            else if(s[i] == '.'){
                if(dot > 0 || eno > 0)  return false;

                else{
                    dot++;
                    continue;
                }
            }

            else if(s[i] == 'e' || s[i] == 'E'){
                if(eno > 0) return false;
                
                else{
                    eno++;
                    continue;
                }
            }
        }
        return true;
        
    }
};