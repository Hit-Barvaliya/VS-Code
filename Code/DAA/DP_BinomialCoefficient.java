import java.util.*;

public class DP_BinomialCoefficient {

    public static int factorial(int n){
        if(n<=1)    return 1;
        return n*factorial(n-1);
    }

    public static int nCk(int n,int k){
        // this is normal way
        return (factorial(n)/(factorial(k)*factorial(n-k)));
    }

    public static int nCk2(int n,int k){

        // this is a logic to find the answer of nCk

        // if(n==k || n == 0)
        //     return 1;

        // return nCk2(n-1,k-1) + nCk2(n-1,k);




        // this is Dynamic Programming way to solve problem

        // time complexiyt :- O(nk)
        // space complexity :- O(nk)

        int arr[][] = new int[n+1][k+1];

        for(int i=0;i<=n;i++){
            for(int j=0;j<=Math.min(i,k);j++){
                if(j==0 || j==i){
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                }
            }
        }

        return arr[n][k];

    }

    public static int nCk3(int n,int k){

        // hear time complexity is same but space complexity is become :- O(k)

        int arr[] = new int[k+1];
        arr[0] = 1;

        for(int i=1;i<=n;i++){
            for(int j=Math.min(k, i);j>=1;j--){
                arr[j] = arr[j] + arr[j-1];
            }
        }
        
        return arr[k];

    }


    public static void main(String string[]){
        System.out.println("Hello");

        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int k = sc.nextInt();

        // System.out.println(nCk(n,k));
        // System.out.println(nCk2(n,k));
        System.out.println(nCk3(n,k));


    }
}
