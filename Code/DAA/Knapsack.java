
import java.util.*;

public class Knapsack {

    public static void main(String string[]){

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter total number iteam :- ");

        int a = sc.nextInt();

        float profit[] = new float[a];
        float weightArr[] = new float[a];
        float ratio[] = new float[a];


        for(int i=0;i<a;i++){
            System.out.println("Enter the profit for iteam "+(i+1)+" :- ");
            profit[i] = sc.nextFloat();
            System.out.println("Enter the weight for iteam "+(i+1)+" :- ");
            weightArr[i] = sc.nextFloat();
            ratio[i] = (profit[i]/weightArr[i]);
        }

        System.out.println("Enter the Weight Capacity :- ");
        float weight = sc.nextFloat();

        // sort all the array according to the ratio of profit and weight
        for(int i=1;i<a;i++){

            for(int j=i;j>0;j--){
                    
                if(ratio[j]>ratio[j-1]){
                    // swap(arr[j],arr[j-1]);
                    float temp1 = profit[j];
                    profit[j] = profit[j-1];
                    profit[j-1] = temp1;

                    temp1 = weightArr[j];
                    weightArr[j] = weightArr[j-1];
                    weightArr[j-1] = temp1;

                    temp1 = ratio[j];
                    ratio[j] = ratio[j-1];
                    ratio[j-1] = temp1;
                    
                }

            }
        }

        for(int i=0;i<a;i++){
            System.out.println(ratio[i]);
        }

        int j = 0;
        float totalprofit = 0;
/* 
        ==> Fractional Kanpsack Problem
 -> we have only one quantity of each product we need to use freaction part of product 
 -> hear the product is liduid we divided in required part
*/
        while(weight > 0 && j<a){

            if(weightArr[j] <= weight){
                totalprofit += profit[j];
                weight = weight - weightArr[j];
                j++;
            } else if (j==(a-1) || weight < weightArr[j]) {
                float tempProfit = weight / weightArr[j] * profit[j];
                totalprofit += tempProfit;
                break;
            }

        }

        System.out.println("This is total profit :- "+totalprofit);

// A 60 10 6.0
// B 100 20 5.0
// C 200 40 5.0
// D 120 30 4.0
// W = 50       answer :- profit = 260 


    }
}
