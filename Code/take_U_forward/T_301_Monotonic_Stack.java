import java.util.Stack;
// this question is to store the Next Grater Element from each Element 

class T_301_Monotonic_Stack{
    public static void main(String string[]){
        
        int arr[] = {4,12,5,3,1,2,5,3,1,2,4,6};

        int ans[] = new int[arr.length];

        Stack sc = new Stack<>();

        sc.add(arr[arr.length-1]);
        ans[arr.length-1] = arr[arr.length-1];

        for(int i=arr.length-2;i>=0;i--){
            while(!sc.isEmpty() ){
                sc.pop();
            }

        }

    }
}