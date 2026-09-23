import java.util.*;

public class make_change_problem {
    public static void main(String string[]){

        Scanner sc = new Scanner(System.in);

        System.out.println("HELLO");

        System.out.println("Enter the size of array :- ");

        int a = sc.nextInt();

        int arr[] = new int[a];
        
        System.out.println("Enter all coin denominations :-");

        for(int i=0;i<a;i++){
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter the amount :- ");

        int amount = sc.nextInt();

        // sort the list of coins

       for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j] > arr[j+1]){
                    // swap(arr[j],arr[j+1]);
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        int totalCoin = 0;
        int j = arr.length-1;

        System.out.println("Coins are :- ");
        while(amount>0 && j>=0){

           if(arr[j] <= amount){
                totalCoin++;
                amount = amount - arr[j];
                System.out.println(arr[j]+"=>");
           } else {
                j--;
           }

        }

        System.out.println("\nTotal coins are :- "+totalCoin);

        
    }
}
