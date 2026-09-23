import java.util.Scanner;

public class DP_LCS{

    public static int find_LCS_Length(String x,String y){

        int m = x.length();
        int n = y.length();

        int arr[][] = new int[m+1][n+1];

        for(int i=0;i<=m;i++){
            arr[i][0] = 0;
        }
        for(int j=0;j<=n;j++){
            arr[0][j] = 0;
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(x.charAt(i-1) == y.charAt(j-1)){
                    arr[i][j] = arr[i-1][j-1]+1;
                } else {
                    arr[i][j] = Integer.max(arr[i-1][j], arr[i][j-1]);
                }
            }
        }

        return arr[m][n];
    }


    public static void main(String string[]){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first string :- ");
        String x = sc.nextLine();
        System.out.println("Enter second string :- ");
        String y = sc.nextLine();

        System.out.println(x+y);

        int len = find_LCS_Length(x,y);

        System.out.println("LCS Length is :- "+len);


    }
}