// Pushing every open Braces and popping them everytime foung their opp..


class Solution {
public:
    bool isValid(string s) {

        stack<int> st;// (({[[    ]]}))
        int n = s.size();

        if(s[0] == ')' || s[0] == '}' || s[0] == ']' || s[n-1] == '(' || s[n-1] == '{' || s[n-1] == '[')       return false;

        for(int i = 0; i < n; i++){

            if(s[i] == '(' || s[i] == '{' || s[i] == '[')    st.push(s[i]);

            else if(!st.empty() && (s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{')                     ||(s[i] == ']' && st.top() == '['))
                st.pop();
            
            else return false;
        }

        if(st.empty())   return true;

        return false;
        
    }
};