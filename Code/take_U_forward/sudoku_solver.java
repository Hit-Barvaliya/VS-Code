

class sudoku_solver {

    public static void solveSudoku(int board[][]){
        solve(board);

        System.out.println("This is an answer :- ");
        for(int[] i : board){
            for(int j : i){
                System.out.print(j+" ");
            }
            System.out.println();
        }

    }

    private static boolean solve(int board[][]){

        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[i].length;j++){
                if(board[i][j] == 0){
                    for(int k=1;k<=9;k++){
                        if(checkNum(board,i,j,k) == true){
                            
                            board[i][j] = k;

                            if(solve(board) == true){
                                return true;
                            } else {
                                board[i][j] = 0;
                            }

                        }
                    }

                    return false;

                }
            }
        }

        return true;
    }


    private static boolean checkNum(int[][] board,int row,int col,int num){
        for(int i=0;i<=8;i++){
            if(board[row][i] == num)    return false;
            if(board[i][col] == num)    return false;   // this is for checking horizontol line (straight line)

            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == num)      return false;

        }
        return true;
    }

    public static void main(String string[]){
        System.out.println("Hello");


       int[][] board = {
    {0,0,0,0,0,0,0,1,2},
    {0,0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0},
    {0,0,0,5,0,0,0,0,0},
    {0,0,0,1,0,6,0,0,0},
    {0,0,0,0,0,0,3,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,7,0,0,0,0},
    {3,4,0,0,0,0,0,0,0}
};



        
        sudoku_solver.solveSudoku(board);


    }    
}
