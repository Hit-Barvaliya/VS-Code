import java.util.*;

public class T_38_count_subarray_with_XOR_K {

    public static void main(String[] args) {

        // this is to take inpout

        // n = int(input('Enter size of arrya :- '))
        // ls = []
        // for i in range(n):
        //     temp = int(input('number :- '))
        //     ls.append(temp)
        
        // for i in ls:
        //     print(i)
        
        
        
        
        // This is brute solution :- 
        // timecomplexity :- O(n^3)
                
        
        int[] ls = {4, 2, 2, 6, 4};
        int count = 0;

        // for(int i=0;i<ls.length;i++){
        //     for(int j=i;j<ls.length;j++){
        //         int xr = 0;
        //         for(int k=i;k<=j;k++){
        //             xr = xr ^ ls[k];
        //             if(xr == 0)
        //                 count++;
        //         }
        //     }
        // }
        

        // this is better solution which is not work

        // for (int i = 0; i < ls.length; i++) {
        //     int xr = 0;
        //     for (int j = i; j < ls.length; j++) {
        //         xr ^= ls[j];        // incremental XOR
        //         if (xr == 0) {
        //             count += 1;
        //         }
        //     }
        // }


        // this is optimal solution

        // this code is not working

        // int xr = 0;
        // HashMap<Integer, Integer> mpp = new HashMap<>();

        // // mpp[xr]++;  // {0 : 1}
        // mpp.put(0, 1);


        // for (int i = 0; i < ls.length; i++) {

        //     // xr = xr ^ a[i]
        //     xr = xr ^ ls[i];

        //     // x = xr ^ k
        //     int x = xr ^ 0;

        //     // cnt += mpp[x]
        //     count += mpp.getOrDefault(x, 0);

        //     // mpp[xr]++
        //     mpp.put(xr, mpp.getOrDefault(xr, 0) + 1);
        // }

        

        System.out.println(count);
    }
}
