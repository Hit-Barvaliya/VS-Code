import java.util.Scanner;

public class DP_Knapsack {

    public static int KnapsackFunction(int profit[],int weight[],int capacity){
        
        int p[][] = new int[profit.length+1][capacity+1];

        for(int i=0;i<profit.length+1;i++){
            p[i][0] = 0;
        }

        for(int i=0;i<capacity+1;i++){
            p[0][i] = 0;
        }

        for(int i=1;i<profit.length+1;i++){
            for(int j=1;j<capacity+1;j++){
                if(weight[i-1] > j){
                    p[i][j] = p[i-1][j];
                } else {
                    p[i][j] = Math.max(p[i-1][j],profit[i-1]+p[i-1][j-weight[i-1]]);
                }
            }
        }

        
        return p[profit.length][capacity];

    }

    public static void main(String string[]){

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter total number iteam :- ");

        int a = sc.nextInt();

        int profit[] = new int[a];
        int weightArr[] = new int[a];


        for(int i=0;i<a;i++){
            System.out.println("Enter the profit for iteam "+(i+1)+" :- ");
            profit[i] = sc.nextInt();
            System.out.println("Enter the weight for iteam "+(i+1)+" :- ");
            weightArr[i] = sc.nextInt();
        }

        System.out.println("Enter the Weight Capacity :- ");
        int weight = sc.nextInt();

       
        int j = 0;
        float totalprofit = KnapsackFunction(profit,weightArr,weight);

        System.out.println("This is total profit :- "+totalprofit);

// A 60 10 6.0
// B 100 20 5.0
// C 200 40 5.0
// D 120 30 4.0
// W = 50       answer :- profit = 260 


    }
}
