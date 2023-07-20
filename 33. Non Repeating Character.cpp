// https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
        char nonrepeatingCharacter(string s)
        {
        //Your code here
        
        unordered_map<char,int> mp;
        for(x : s)   mp[x]++;
        
        for(x : s)   if(mp[x] == 1)    return x;
        
        return '$';
        
    }
    
    

};