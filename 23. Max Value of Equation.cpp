// Bruteforce Approach TC:O(n^2)    SC:O(1)
// Note : Gives TLE

class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {

        int mx = INT_MIN;

        int n = points.size();

        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){

                if(abs(points[i][0] - points[j][0]) <= k){
                    mx = max(mx, points[i][1] + points[j][1] + abs(points[i][0] - points[j][0]));
                }
            }
        }
        
        return mx;
        
    }
};

//Optimized(using priority queue   g                                                                 )

class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {

        int res = INT_MIN;

        int n = points.size();

        priority_queue<pair<int,int>> q;

        for(int i = 0; i < n; i++){

            while(!q.empty() && points[i][0] - q.top().second > k)   q.pop();

            if(!q.empty())
                res = max(res, points[i][0] + points[i][1] + q.top().first);

            q.push({points[i][1]-points[i][0], points[i][0]});
        }

        return res;
        
    }
};