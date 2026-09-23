public class DP_fibonacciSerics{

    public static int fibo(int n){
        
        if(n <= 1){
            return n;
        }
        return fibo(n-1) + fibo(n-2);
    }


    public static int fibo(int n,int arr[]){

        // according to dynamic programming
        
        // this is top-to-bottom aproch
        // time complexity :- O(n)
        if(arr[n] != -1)
            return arr[n];
        
        if(n <= 1)
            return n;
        
        return arr[n] = fibo(n-1, arr) + fibo(n-2, arr);
        
    }
    
    public static int fibo2(int n){
        // according to dynamic programming
        
        // this is bottom-to-top approch
        // time complexity :- O(n)
        // space complexity :- O(n)
        int fe[] = new int[n+1];

        fe[0] = 0;
        fe[1] = 1;

        for(int i=2;i<n+1;i++){
            fe[i] = fe[i-1] + fe[i-2];
        }

        return fe[n];
    }
    
    public static int fibo3(int n){
        // according to dynamic programming
        
        // this is Optimal DP
        // time complexity :- O(n)
        // space complexity :- O(1)
        if(n==0) return 0;
        if(n==1) return 1;
        int a = 0, b = 1,c = 0;

        for(int i=2;i<=n;i++){
            c = a + b;
            a = b;
            b = c;
        }

        return c;
    }


    public static void main (String string[]){
        System.out.println("Hello");


        //  1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610   
        
        int arr[] = new int[31];

        for(int i=0;i<31;i++){
            arr[i] = -1;
        }

        long start = System.nanoTime();
        
        // System.out.println(fibo(40));
        // System.out.println(fibo(30,arr));
        // System.out.println(fibo2(70));
        System.out.println(fibo3(15));
        
        long end = System.nanoTime();

        System.out.println("Time is :- "+(end-start));

    }
}