import java.util.Scanner;

class HeapNode {

    int arr[];
    int capacity = 0;
    int size = 0;
    public HeapNode(int capacity){
        this.capacity = capacity;
        arr = new int[this.capacity+1];
        arr[0] = -1;
    }

    public int leftchild(int i){
        int i2 = i*2;
        if(i <= 0){
            System.out.println("Your Node is invalid :- ");
            return -1;
        }
        if(i2 <= size){
            return arr[i2];
        } else {
            System.out.println("you Node is leaf node");
            return -1;
        }
    }

    public int rightchild(int i){
        int i2 = i*2+1;
        if(i <= 0){
            System.out.println("Your Node is invalid :- ");
            return -1;
        }
        if(i2 <= size ){
            return arr[i2];
        } else {
            System.out.println("you Node is leaf node");
            return -1;
        }
    }

    public int parent(int i){
        int i2 = i / 2;
        if(i2 > 0 && i <= size){
            return arr[i2];
        } else {
            System.out.println("Your Node is not exist :- ");
            return -1;
        }   
    }

    public void insertElement(int n){
        if(size >= capacity){
            System.out.println("Your array is full :- ");
            return;
        } else {
            size++;
            arr[size] = n;

            int i = size; 

            while(arr[i] < arr[i/2]){
                int temp = arr[i];
                arr[i] = arr[i/2];
                arr[i/2] = temp;
                i /= 2;
            }

        }
    }
    
    public int deletElement(){
        if(size <= 0){
            System.out.println("Your array is empty :- ");
            return -1;
        } else {

            int ele = arr[1];

            arr[1] = arr[size];
            size--;
            heapifyDown();
            return ele;
        }
    }

    public void heapifyDown(){

        int i = 1;

            // while((i<=size/2) && (arr[i] > arr[2*i] || arr[i] > arr[(2*i)+1])){
            while((i<=size/2)){
                if(arr[i] > arr[2*i]){
                    int temp = arr[i];
                    arr[i] = arr[i*2];
                    arr[i*2] = temp;
                    i = i*2;
                } else if (arr[i] > arr[(2*i)+1]) {
                    int temp = arr[i];
                    arr[i] = arr[(2*i)+1];
                    arr[(2*i)+1] = temp;
                    i = i*2+1;
                } else {
                    break;
                }
            }
        

    }


    public void printHeapArray(){

        for(int i=1;i<=size;i++){
            System.out.print(arr[i]+"=>");
        }
        System.out.println();
    }


}

public class Min_HeapTree {
    public static void main(String string[]){

// hear we sort all the element in assending order
        System.out.println("Enter the number of element :- ");
        
        int n = (new Scanner(System.in)).nextInt();
        
        // hear we make a object of heap tree
        HeapNode h1 = new HeapNode(n);

        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = (new Scanner(System.in)).nextInt();
        }

        // insert all the element in Min-Heap tree
        for(int i=0;i<n;i++){
            h1.insertElement(arr[i]);
        }

        
        // h1.deletElement();
        // h1.deletElement();
        // h1.deletElement();

        h1.printHeapArray();
        
   
/* 
-> 7 => 4 7 6 9 8 10 5 delet three element from this error menual so you can find error properly
*/



    }
}
