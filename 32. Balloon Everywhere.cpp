//https://practice.geeksforgeeks.org/problems/45fa306a9116332ece4cecdaedf50f140bd252d4/1

class Solution{
public:
    int maxInstance(string s){
        
        unordered_map<char, int> mp;
        
        for(char x : s)  mp[x]++;
        
        //if(mp['a']%1 <= 1 && mp['l']%2 <= 2 && mp['a']%1 <= 1 && mp['o']%2 <= 2 && mp['n']%1 <= 1)  return mp['b'];
        
        return min(mp['a'], min( mp['b'], min( mp['n'],min(mp['l']/2, mp['o']/2))));
    }
};