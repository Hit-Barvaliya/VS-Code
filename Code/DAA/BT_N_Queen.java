
import java.util.Scanner;

public class BT_N_Queen{

    static int count = 0;

    public static boolean isSafe(char arr[][],int row,int col){


        // hear we check in straight line
        for(int i=0;i<row;i++){
            if(arr[i][col] == 'Q')
                return false;
        }

        // hear we check in top-left side
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
            if(arr[i][j] == 'Q')
                return false;
        }

        // hear we check in top-right side
        for(int i=row-1,j=col+1;i>=0&&j<arr.length;i--,j++){
            if(arr[i][j] == 'Q')
                return false;
        }

        return true;
    }

    public static void placeQueen(char arr[][],int row){

        if(row == arr.length){
            for(char[] i : arr){
                for(char j : i){
                    System.out.print(" "+j+" ");
                }
                System.out.println();
            }
            count++;
            System.out.println("\n-----------------------Solution No. "+count+" is Complated\n");
            return ;
        }

        for(int j=0;j<arr.length;j++){
            if(isSafe(arr, row, j)==true){
                arr[row][j] = 'Q';
                placeQueen(arr, row+1);
                arr[row][j] = '.';
            }
        }

    }


    public static void main(String string[]){

        System.out.println("Hello");

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of chess board in one digit :- ");
        int n = sc.nextInt();
        // int n = 4;

        char arr[][] = new char[n][n];

        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                arr[i][j] = '.';
            }
        }


        placeQueen(arr, 0);
        

    }
}