import java.util.*;
public class MergeSortTimeAnalysis {

    public void merge(int[] arr, int l, int m, int r){
        List<Integer> temp = new ArrayList<>();
        int i = l, j = m + 1;

        while(i <= m && j <= r){
            if(arr[i] <= arr[j]) temp.add(arr[i++]);
            else temp.add(arr[j++]);
        }

        while(i <= m) temp.add(arr[i++]);
        while(j <= r) temp.add(arr[j++]);

        for(int k = l; k <= r; k++){
            arr[k] = temp.get(k - l);
        }
    }

    public void mergesort(int[] arr, int l, int r){
        if(l < r){
            int m = (l + r) / 2;
            mergesort(arr, l, m);
            mergesort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
     public static void main(String[] args) {
        Random rand = new Random();
        MergeSortTimeAnalysis ms = new MergeSortTimeAnalysis();
        System.out.println("----------------------------------------");
        System.out.printf("| %-15s | %-18s |%n", "Input Size (N)", "Avg Time (ms)");
        System.out.println("----------------------------------------");
        for(int size = 10_000; size <= 1_000_000; size += 50_000){
            int[] data = new int[size];
            for(int i = 0; i < size; i++){
                data[i] = rand.nextInt(size * 10);
            }
            long totalTime = 0;
            int trials = 50;
            ms.mergesort(data.clone(), 0, size - 1);
            for(int t = 0; t < trials; t++){
                int[] copy = data.clone();
                long start = System.nanoTime();
                ms.mergesort(copy, 0, size - 1);
                long end = System.nanoTime();
                totalTime += (end - start);
            }
            double avgTimeMs = (totalTime / (double) trials) / 1_000_000.0;
            System.out.printf("| %-15d | %-18.4f |%n", size, avgTimeMs);
        }
        System.out.println("----------------------------------------");
    }
}




 

// import java.util.Vector;

// public class MergeSortTimeAnalysis {

//     public static void margeArray(int arr[],int low, int mid, int high){

//         Vector vs = new Vector<>();
        
//         int i = low;
//         int j = mid+1;

//         while(i<=mid && j<=high){
//             if(arr[i] <= arr[j]){
//                 vs.add(arr[i]);
//                 i++;
//             } else {
//                 vs.add(arr[j]);
//                 j++;
//             }
//         }

//         while(i<=mid){
//             vs.add(arr[i]);
//             i++;
//         }
//         while(j<=high){
//             vs.add(arr[j]);
//             j++;
//         }

//         for(int k=low;k<=high;k++){
//             arr[k] = (int)vs.get(k-low);
//         }


//     }

//     public static void margeSort(int arr[], int low, int high){

//         int mid = (low + high) / 2;

//         if(low >= high) return;

//         margeSort(arr, low, mid);
//         margeSort(arr, mid+1, high);
//         margeArray(arr,low,mid,high);

//     }

//     public static void main(String string[]){

//         int arr[] = {38, 27, 43, 3, 9, 82, 10};


//         margeSort(arr,0,6);

//         for(int i : arr)
//             System.out.print(i+"=>");

//     }
// }


