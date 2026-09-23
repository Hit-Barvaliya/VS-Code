public class MaxSubArray_Kadane_sAlgo {
    
    
    
    public static void main(String string[]){

        // Maximum Subarray Problem = Find continuous part of array with highest sum.
        
        System.out.println("Hello");
        
        int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        // int arr[] = {2,-1, 3,-4, 5, 2,-1};

        // this is brute force solution 

        // int max_sum = arr[0];
        // int s_index = 0,e_index = 0;
        // for(int i=0;i<arr.length;i++){
        //     int curr_sum = arr[i];
        //     for(int j=i+1;j<arr.length;j++){
        //         curr_sum += arr[j];
        //         if(max_sum < curr_sum){
        //             max_sum = curr_sum;
        //             s_index = i;
        //             e_index = j;
        //         }
        //     }
        // }

        // Time complexity is :- O(n^2)

        //---------------------------------------------------------------------------------
        
        // Second solution is devide and conqure 
        
        //---------------------------------------------------------------------------------

        // third solution is optimal solution (Kadane's Algorithm)


        int max_sum = arr[0];
        int curr_sum = 0;
        int start = 0,tempstart = 0,end = 0;
        for(int i=0;i<arr.length;i++){
            // curr_sum = Math.max(arr[i], curr_sum+arr[i]);
            // max_sum = Math.max(max_sum, curr_sum);

            if(arr[i] > curr_sum+arr[i]){
                curr_sum = arr[i];
                tempstart = i;
            } else {
                curr_sum= curr_sum + arr[i];
            }

            if(max_sum < curr_sum){
                max_sum = curr_sum;
                start = tempstart;
                end = i;
            }

        }



        System.out.println("Maxmum sum is :- "+max_sum);
        System.out.println("It's index is :- "+start + " => " + end);


    }
}
