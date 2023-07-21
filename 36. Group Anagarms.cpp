//  https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        
        int n = strs.size();
        for(int i = 0; i < n; i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }

        auto it = mp.begin();
        while(it != mp.end()){
            ans.push_back(it->second);
            ++it;
        } 

        return ans;        
    }
};