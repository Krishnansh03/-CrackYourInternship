https://leetcode.com/problems/excel-sheet-column-title/description/

class Solution {
public:
    string convertToTitle(int col) {
        
        string ans = "";

        while(col >0){
            
            col--;
            int rem = col%26;
            
            ans+=rem + 'A';
            
            col = col / 26;
        }

            string an = "";
            for(int i = ans.size()-1; i >=0; i--)
                an+=ans[i];

            return an;
    }
};