// https://leetcode.com/problems/basic-calculator-ii/description/

// Solution using Stack

class Solution {
public:
    int calculate(string s) {

        stack<int> num;
        int res = 0, cno = 0, len = s.length();
        char op = '+';

        for(int i = 0; i < len; i++){
            char x = s[i];
            if(isdigit(x)){
                cno = (cno * 10) + (x -'0');
            }
            if(!isdigit(x) && !iswspace(x) || i == len-1){
                if(op == '+')   num.push(cno);

                else if(op == '-')  num.push(-cno);

                else if(op == '*'){
                    int top = num.top();
                    num.pop();
                    num.push(top*cno);
                }
                else{
                    int top = num.top();
                    num.pop();
                    num.push(top/cno);
                }
                cno = 0;
                op = x;
                
            }

        }
        while(num.size() != 0){
            res += num.top();
            num.pop();
        }
        
        return res;
    }
};