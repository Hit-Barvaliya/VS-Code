
import java.util.*;

public class KaratsubaAlgorithm {

    public static int countDigit(int num){
        int count = 0;
        while(num > 0){
            num /= 10;
            count++;
        }
        return count;
    }

    public static int getMaxNum(int num1,int num2){
        if(num1 < num2)
            return num2;
        else 
            return num1;
    }

    public static int KartsubaMultiplication(int num1,int num2){
        
        if(num1 < 10 && num2 < 10 )
            return num1*num2;
        
        int n = getMaxNum(countDigit(num1),countDigit(num2));
        
        int m = n / 2 ;
        
        int a = num1 / ( (int)Math.pow(10,m) );
        
        int b = num1 % ( (int)Math.pow(10,m) );
        
        int c = num2 / ( (int)Math.pow(10,m) );
        
        int d = num2 % ( (int)Math.pow(10,m) );
        
        int P = KartsubaMultiplication(a,c);

        int Q = KartsubaMultiplication(b,d);

        int R = KartsubaMultiplication(a+b, c+d);
             
        return P*((int)Math.pow(10, 2*m)) + (R-P-Q)*((int)Math.pow(10, m)) + Q;

    }
    

    public static void main(String string[]){

        /* 
        this is treditional method for X*Y  = (a*10^1 + b)*(b*10^1 + c):- 
        ac*10^2 + (ad+bc)*10^1 + bd
        
        according to KARTSUBA Algorithm :- 
        p = ac
        q = bd
        r = (a+b)*(c+d)
        
        X * Y = p*10^2 + (r-p-q)*10^1 + r
        
        -> in the treditional method we have four multiplication are required while in the new algortihm we required only three multiplication.
        */

        System.out.println("Hello");
        
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter first number :- ");
        int num1 = sc.nextInt();
        
        System.out.println("Enter Second number :- ");
        int num2 = sc.nextInt();
        
        int ans = KartsubaMultiplication(num1,num2);
        
        System.out.println("Answer is :- "+ans);
    }
}
