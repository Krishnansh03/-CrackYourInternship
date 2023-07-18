// Optimized approach using Stack
// TC: O(4n) === O(n)     SC:O(2n) === O(n)

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int mx = 0, n = heights.size();

        stack<int> st;
        int leftsmall[n], rightsmall[n];

        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if(st.empty())
                leftsmall[i] = 0;
            else
                leftsmall[i] = st.top()+1;
                
            st.push(i);
        }

        while(!st.empty())  st.pop();  // emptying the stack for reuse

        for(int i = n-1; i >=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if(st.empty())
                rightsmall[i] = n-1;
            else
                rightsmall[i] = st.top()-1;
                
            st.push(i);
        }

        for(int i = 0; i < n; i++)
            mx = max(mx, (rightsmall[i]- leftsmall[i]+1) * heights[i]);

        return mx;
      
    }
};