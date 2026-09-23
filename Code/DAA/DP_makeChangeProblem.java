
import java.util.*;

public class DP_makeChangeProblem {

    public static void makeChange(int coins[],int target){

        int arr[][] = new int[coins.length+1][target+1];

        for(int i=0;i<=coins.length;i++){
            arr[i][0] = 0;
        }
        for(int j=0;j<=target;j++){
            arr[0][j] = Integer.MAX_VALUE-1;
        }

        // do dry run for understanding

         for (int i = 1; i <= coins.length; i++) {
            for (int j = 1; j <= target; j++) {

                if (coins[i - 1] <= j) {
                    arr[i][j] = Math.min(arr[i - 1][j],1 + arr[i][j - coins[i - 1]]);
                } else {
                    arr[i][j] = arr[i - 1][j];
                }
            }
        }

        System.out.println("\nTotal number of coins is :- "+arr[coins.length][target]);


        // this is is for reconstruction

        ArrayList<Integer> usedcoin = new ArrayList<>();

        System.out.println("These coins are used :- ");
         
        for(int i=coins.length,j=target;i>0&&j>0;){
            if(arr[i][j] == arr[i-1][j]){
                i = i - 1;
                // hear if condition is not required so we can write only else
            } else if (arr[i][j] == 1 + arr[i][j-coins[i-1]]) { 
                usedcoin.add(coins[i-1]);
                j = j - coins[i-1];
            }

        }

        for(int i : usedcoin){
            System.out.print(i+"=>");
        }


    }

    public static void makeChange2(int coins[],int amount){

        int answer[] = new int[amount+1];

        for(int i=0;i<answer.length;i++){
            answer[i] = Integer.MAX_VALUE-1;
        }

        answer[0] = 0;

        for(int i=1;i<=amount;i++){

            for(int coin : coins){
                if(coin <= i)
                    answer[i] = Integer.min(answer[i], 1+answer[i-coin]);
            }

        }

        if(answer[amount] == Integer.MAX_VALUE - 1)
            System.out.println("This is not possible :- ");
        else {
            System.out.println("Total used coins are :- "+answer[amount]);


        // this is reconstruction :- 

        ArrayList<Integer> usedcoin = new ArrayList<>();

        int  temp = amount;

        // while(temp > 0){
        //     int coin = coins
        // }




        }


    }

    public static void main(String string[]){
        System.out.println("Hello");


        Scanner sc = new Scanner(System.in);

        System.out.println("Number of coins :- ");

        int n = sc.nextInt();

        int coins[] = new int[n];

        for(int i=0;i<n;i++){
            coins[i] = sc.nextInt();
        }

        System.out.println("Enter targeted ampount :- ");

        int target = sc.nextInt();

        // makeChange(coins,target);
        makeChange2(coins,target);



    }
}


