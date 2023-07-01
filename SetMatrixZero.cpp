// BruteForce Approach

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                for(int l=0;l<n;l++)
                {
                    if(matrix[i][l]==0)continue;
                    else
                    matrix[i][l]=-100; // any -ve value
                }
        
                for(int l=0;l<m;l++)
                {
                    if(matrix[l][j]==0)continue;
                    else
                    matrix[l][j]=-100;
                }
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==-100)
                matrix[i][j]=0;
            }
        }
    }

       
};
        