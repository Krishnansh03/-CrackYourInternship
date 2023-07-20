//https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {

        string str;
        vector<string> v;
        for(int i = 0; i < s.size(); i++){          // Capture every words in a vector

            if(s[i] == ' ') continue;
            string temp;
            while(s[i] != ' ' && i < s.size()){
                temp += s[i];
                ++i;
            }
            v.push_back(temp);
        }

        for(int i = v.size()-1; i >= 0; i--)  //print vector in reverse order;  
            str += (v[i]+" ");
        str.pop_back();
        return str;
    }
};