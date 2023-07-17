// Beats 100% in TC and SC

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {

        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){

                int ln = getLiveNeighbours(board,i,j,m,n);

                if(board[i][j] == 0){
										// live if curr = 0, live neighbour == 3, Add 2
                    if(ln == 3)     board[i][j] = 2;
										else	continue;

                }
                else{
                    if(ln == 2 || ln == 3 )     board[i][j] = 3;  
										else 	continue;              
                }

            }
        }

        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                board[i][j] = board[i][j]/2;
            }
        }


        
    }

    int getLiveNeighbours(vector<vector<int>>& curr, int i, int j, int m, int n) {
	int liveNeighbours = 0;
	if(i>0) {
		//check the upper neighbour
		if(curr[i-1][j]%2 == 1) liveNeighbours++;
	}
	if(i<m-1) {
		//check the lower neighbour
		if(curr[i+1][j]%2 == 1) liveNeighbours++;
	}
	if(j>0) {
		//check the left neighbour
		if(curr[i][j-1]%2 == 1) liveNeighbours++;
	}
	if(j<n-1) {
		//check the right neighbour
		if(curr[i][j+1]%2 == 1) liveNeighbours++;
	}

	if(i>0 && j>0) {
		if(curr[i-1][j-1]%2 == 1) liveNeighbours++;
	}
	if(i>0 && j<n-1) {
		if(curr[i-1][j+1]%2 == 1) liveNeighbours++;
	}
	if(i<m-1 && j>0) {
		if(curr[i+1][j-1]%2 == 1) liveNeighbours++;
	}
	if(i<m-1 && j<n-1) {
		if(curr[i+1][j+1]%2 == 1) liveNeighbours++;
	}
	return liveNeighbours;
}
};