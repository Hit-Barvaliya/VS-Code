
public class QuickSort{

    public static int pivotIndex(int arr[], int low, int high){

        int povitElement = arr[low];

        int i = low+1;
        int j = high;

        while (i<=j) {
    
            while(i <= high && arr[i] < povitElement){
                i++;
            }
            
            while(j >= low && arr[j] > povitElement){
                j--;
            }
            
            if(i < j){
                // swap(arr[i],arr[j])
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
            
            // i++;j--;     //=> this is required when all element of array are same

        }

        // swap(arr[low],arr[j])
        int temp = arr[j];
        arr[j] = arr[low];
        arr[low] = temp;

        return j;

    }

    public static void quickSort(int arr[], int low, int high){

        if(low < high ) {    
            int pivot = pivotIndex(arr,low,high); 
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }

    }

    public static void main(String string[]){

        int arr[] = {38, 27, 43, 3, 9, 82, 10};
        /* 
        Recurrence Relation:
        Best case:
        T(n) = 2T(n/2) + Θ(n) = Θ(n log n)
        Worst case:
        T(n) = T(n-1) + Θ(n) = Θ(n²)
        Average case:
        T(n) = 2T(n/2) + Θ(n) = Θ(n log n)
        */

        quickSort(arr, 0 , arr.length-1);

        for (int i : arr)

            System.out.print(i+"=>");

    }
}