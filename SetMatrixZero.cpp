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

// More optimized approach in TC but Higher SC(using 2 extra arrays to keep record of indexes of zeros)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> row = {0};
        vector<int> col = {0};

        for (int i = 0; i < r; i ++){
            
            for(int j = 0; j < c; j++){

                if(matrix[i][j] == 0){
                    
                    row[i] = 1;
                    col[j] = 1;
                }
            }+
        }

        for (int i = 0; i < r; i ++){
            
            for(int j = 0; j < c; j++){

                if(row[i] == 1 || col[j] == 1){
                    
                    matrix[i][j] = 0;
                }
            }
        }
    }
};