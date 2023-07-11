class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int l = 0, r = cardPoints.size() - k;
        int n = cardPoints.size();
        long long total = 0;
        for(int i = r; i < n; i++)
                total+= cardPoints[i];
        long long res = total;
        
        while(r < n){
            total += (cardPoints[l] - cardPoints[r]); 
            res = max(res, total);
            l++;
            r++;
        }
    return res;
        
    }
};