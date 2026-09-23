
import java.util.*;

class HuffManNode implements Comparable<HuffManNode>{
    int freq;
    char ch;

    HuffManNode right;
    HuffManNode left;

    public HuffManNode(int freq, char ch) {
        this.freq = freq;
        this.ch = ch;
    }
    public int getNum() {
        return freq;
    }
    public char getCh() {
        return ch;
    }

    public int compareTo(HuffManNode f){
        return this.freq - f.freq;
    }
    
    public String toString(){
        return "Character is :- "+ch+",  Freq is :- "+freq;
    }


}




public class huffManCodingProblem{

    public static void storeCode(HuffManNode root,String s){

        if(root.right == null && root.left == null){
            System.out.println(root.ch + " => " + s);
            return;
        }

        storeCode(root.left, s + "0");
        storeCode(root.right, s + "1");

    }


    public static void main(String string[]){


        System.out.println("Hello");

        PriorityQueue<HuffManNode> pq = new PriorityQueue<HuffManNode>();


        char arr1[] = {'A','B','C','D','E','F'};
        int arr2[] = {5,9,12,13,16,45};

        for(int i=0;i<6;i++){
            pq.add(new HuffManNode(arr2[i], arr1[i]));
            System.out.print(arr2[i]+"=>");
        }
System.out.println();
        // for(int i=0;i<6;i++){
        //     System.out.println(pq.poll());
        // }

        HuffManNode root = null;

        while(pq.size() > 1){

            HuffManNode h1 = (HuffManNode) pq.poll();
            HuffManNode h2 = (HuffManNode) pq.poll();

            

            HuffManNode temp = new HuffManNode(h1.freq+h2.freq,'-');
            temp.right = h1;
            temp.left = h2;

            root = temp;
            pq.add(temp);

        }

        storeCode(root,"");



    }
}