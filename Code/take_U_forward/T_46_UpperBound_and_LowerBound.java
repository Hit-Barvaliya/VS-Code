// video No. 46 is about the binary search

import java.util.Arrays;
import java.util.Vector;

class T_46_UpperBound_and_LowerBound{
    // understand the defination of lower-bound shaw the photo

    public static void findFloorCeling(Vector<Integer> vc,int x){
        // for finding th celing we need to find upper-bound
        int low = 0,high = vc.size()-1;
        int ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(vc.get(mid) >= x){
                ans = mid;
                high = high - 1;
            } else {
                low = mid + 1;
            }
        }
        System.out.println("This is celing :- "+ans);

        
        low = 0;high = vc.size()-1;ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(vc.get(mid) <= x){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        System.out.println("This is floor :- "+ans);

    }

    public static void main(String string[]){
        System.out.println("Hello");

        Vector<Integer> vc = new Vector<>(Arrays.asList(1,2,3,3,5,5,8,8,10,10,11));

    // time-complexity is O[logn-base2]

    // in C++ we have in-built function for this upper and lower bound
        int n = 3;
        int ans = vc.size();
        int low = 0,high = vc.size()-1;

        // this is for upper-bound
        {while(low <= high){
            int mid = low + (high-low) / 2;
            if(vc.elementAt(mid) >= n){
                ans = mid;
                high = mid - 1;
            } else {
               low = mid + 1;
            }
        }
        System.out.println("The value of n is [this is for Upper_Bound] :- "+ans);
        }
        
        // this is for lower-bound
       { ans = vc.size();
        low = 0;
        high = vc.size()-1;
        
        while(low <= high){
            int mid = low + (high-low) / 2;
            if(vc.elementAt(mid) > n){
                high = mid - 1;
                ans = mid;
            } else {
               low = mid + 1;
            }
        }

        System.out.println("This is for [Lower_Bound] :- "+ans);}

        /*
         * Given a sorted array of nums consisting of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
         */

        /* <== find the lower bounf for this answer */


        /*
         * Given a sorted array nums and an integer x. Find the floor and ceil of x in nums. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x. If no floor or ceil exists, output -1.
         */

         T_46_UpperBound_and_LowerBound.findFloorCeling(vc,3);


    
        }
}