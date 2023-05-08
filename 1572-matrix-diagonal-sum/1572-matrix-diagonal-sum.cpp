class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int ROW , COL ;
        ROW = COL = mat.size();
	int sum = 0; 
	for (int i = 0; i < ROW ; i++) { 
		for (int j = 0; j < COL; j++) { 
			 if (i == j || i + j == COL - 1)
            {
                sum = sum + mat[i][j];
            }
		} 
	} 
	return sum; 
    }
};