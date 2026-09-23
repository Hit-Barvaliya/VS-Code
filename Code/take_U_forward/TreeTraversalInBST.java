import java.io.*;
import java.util.*;

class Node{
        int data;
        Node right;
        Node left;
        public Node(int data){
            this.data = data;
            right = null;
            left = null;
        }
        public Node (){}
    }

class BST{
    
    Node root = null;
    
    public void insert(int num){
        root = add(root,num);
    } 
    private Node add(Node temp,int num){
        if(temp == null){
            return new Node(num);
        } else {
            if(temp.data > num){
                temp.left = add(temp.left,num);
            } else {
                temp.right = add(temp.right,num);
            }
        }
        return temp;
    }
    
    
    public void inorder(){
        display(root);
    }
    
    public void display(Node temp){
        // print in inorder
        if(temp == null){
            return;
        } else {
            // left root right
            display(temp.left);
            System.out.print(temp.data + "=>");
            display(temp.right);
            // for the other orders we just need to change the order of lines according to the LeftNode RootNode RightNode
        }
    }
    
}

public class TreeTraversalInBST {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        BST b1 = new BST();

        String str = sc.nextLine();

        str = str.trim();

        String[] str2 = str.split("\s+");

        int num[] = new int[str2.length];

        
        
        
        for(int i=0;i<str2.length;i++){
            num[i] =  Integer.parseInt(str2[i]);
            b1.insert(num[i]);           
        }
        
        b1.inorder();
        
    }
}


















// // this is all about the syntax of vector, Map and Set

// import java.util.*;

// class demo{
//     public static void main(String string[]){

//         String p1 = "ja";   // pool
//         String p2 = "va";   // pool
//         String s1 = p1+p2;  // heap
//         String s2 = "java"; // pool
//         String s3 = s1.intern();    // pool
//         System.out.println((s1==s2)+"=>"+(s2==s3));

//         System.out.println(1+2+"3");
//         System.out.println(1+'a');
//         System.out.println((char)('a'+1));

//         int i = 0;
//         int j = 0;
//         boolean t = true;
//         boolean r;

//         r = (t & 0<(i+=1));
//         r = (t && 0<(i+=2));
//         r = (t | 0<(j+=1));
//         r = (t || 0<(j+=2));

//         System.out.println(i+" "+j);

//     }
// }