
import java.util.*;

// this problem is same as 3 sum problem which is just before this lecture

class T_37_4Sum_problem {

    public static void approch1(int[] arr,int target){
        // this is brute solution

        // time-complexity is O(n^4)    ==> sorting complexity is not consider because of four element sorting is very less
        // space-complexity is O(number of nodes)*2

        Set<Vector<Integer>> ans = new HashSet<>();

        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                for(int k=j+1;k<arr.length;k++){
                    for(int l=k+1;l<arr.length;l++){
                        int sum = arr[i]+arr[j]+arr[k]+arr[l];
                        if(sum == 0){
                            Vector<Integer> vc = new Vector<>();
                            vc.add(arr[i]);
                            vc.add(arr[j]);
                            vc.add(arr[k]);
                            vc.add(arr[l]);
                            Collections.sort(vc);
                            ans.add(vc);
                        }
                    }
                }
            }
        }

        System.out.println("This answer from the brute solution :- \n"+ans);

    }

    public static void approch2(int[] arr,int target){
        // this is better solution

        // time-complexity is O(n^3) * log(m)
        // space-complexity is O(N) + O(quads)*2

        Set<Vector<Integer>> ans = new HashSet<>();

        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){

                Set<Integer> hashset = new HashSet<>();

                for(int k=j+1;k<arr.length;k++){
                    int fourth = target - (arr[i]+arr[j]+arr[k]);
                    if(hashset.contains(fourth)){
                        Vector<Integer> vc = new Vector<>();
                        vc.add(arr[i]);
                        vc.add(arr[j]);
                        vc.add(arr[k]);
                        vc.add(fourth);
                        Collections.sort(vc);
                        ans.add(vc);
                    }
                    hashset.add(arr[k]);

                }
            }
        }

        System.out.println("This is output from the better solution :- \n"+ans);

    }

    public static void approch3(int[] arr,int target){
        // this is optimal solution

        // time-complexity is O(n^3)
        // space-complexity is O(m) where m = number of unique quadruplets.

        // we need sorted array for this

    // this is for sorting of array
        Arrays.sort(arr);

        Set<Vector<Integer>> ans = new HashSet<>();

        for(int i=0;i<arr.length;i++){
            if(i>0 && arr[i] == arr[i-1])   continue;
            for(int j=i+1;j<arr.length;j++){
                if(j!=(i+1) && arr[j] == arr[j-1])   continue;

                int k = j+1;
                int l = arr.length - 1;

                while(k < l){
                    int sum = arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum == target){
                        Vector<Integer> vc = new Vector<>();
                        vc.add(arr[i]);
                        vc.add(arr[j]);
                        vc.add(arr[k]);
                        vc.add(arr[l]);
                        ans.add(vc);
                        k++;l--;
                        while(k<l && arr[k] == arr[k-1]){k++;}
                        while(k<l && arr[l] == arr[l-1]){l--;}
                    } else if(sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }

            }
        }

        System.out.println("This output from the optimal solution :- \n"+ans);

    }

    public static void main(String string[]){
        System.out.println("Hello");

        int arr[] = {1,0,-1,0,-2,2};

        int target = 0;

        T_37_4Sum_problem.approch1(arr,target);
        T_37_4Sum_problem.approch2(arr,target);
        T_37_4Sum_problem.approch3(arr,target);

    }    
}
