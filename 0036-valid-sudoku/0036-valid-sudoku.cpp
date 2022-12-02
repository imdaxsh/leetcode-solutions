class Solution {
public:
bool canplace(int i,int j,vector<vector<char>>& board){
     
        /*
             calculate start of block
             let i=4, j=5 then start cordinate will be x=(4/3)*3=(1*3)=3
             y=(5/3)*3=(1*3)=3
        */
        int sx=(i/3)*3, sy=(j/3)*3;
        // check in 3x3 block
        for(int x=sx;x<sx+3;x++){
            for(int y=sy;y<sy+3;y++){
                if(x!=i && y!=j && board[x][y]==board[i][j]){
                    return false;
                }
            }
        }
        // check col
        for(int x=0;x<9;x++){
            if(x!=j && board[i][x]==board[i][j])
                return false;
        }
        
        // check row
         for(int x=0;x<9;x++){
            if(x!=i && board[x][j]==board[i][j])
                return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
       
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(!canplace(i,j,board))
                        return false;
                }
            }
        }
        return true;
    }
};