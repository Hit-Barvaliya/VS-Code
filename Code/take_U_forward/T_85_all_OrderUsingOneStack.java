 
// for more understanding trace this code with more example

import java.util.*;
import java.util.AbstractMap.SimpleEntry;

class Pair{
    TreeNode node;
    int num;
    Pair(){}
    Pair(TreeNode node,int num){
        this.node = node;
        this.num = num;
    }
    public TreeNode getNode(){return node;}
    public int getNum(){return num;}
    public void inscreaseNum(){num++;}
}

class T_85_all_OrderUsingOneStack {

    public static void printAllOrder(TreeNode root){
        
        // Stack<Map<TreeNode,Integer>> st = new Stack<>();

        // st.add(new HashMap<TreeNode,Integer>() {{
        //     put(root, 1);
        // }});


        // Stack<SimpleEntry<TreeNode,Integer>> st = new Stack<>();

        // st.push(new SimpleEntry<TreeNode,Integer>(root,1));

        Stack<Pair> st = new Stack<>();

        Collection<Integer> inorder = new ArrayList<>();
        List<Integer> preorder = new ArrayList<>();
        ArrayList<Integer> postorder = new ArrayList<>();

        st.add(new Pair(root,1));
        
        while(!st.isEmpty()){
            
            Pair p = st.peek();
            
            if(p.getNum() == 1){
                p.inscreaseNum();
                // st.add(p);   ==> if we do pop node at loni No. :- 44
                if(p.getNode().left != null)   st.add(new Pair(p.getNode().left,1));
                preorder.add(p.getNode().data);
                
            } else if (p.getNum() == 2){
                p.inscreaseNum();
                // st.add(p);   ==> if we do pop node at loni No. :- 44
                if(p.getNode().right != null)   st.add(new Pair(p.getNode().right,1));
                inorder.add(p.getNode().data);
                
            } else if (p.getNum() == 3){
                postorder.add(p.getNode().data);
                st.pop();
            }

        }

        System.out.println("\nThis is in-order :- ");
        for(int i : inorder){
            System.out.print(i+"=>");
        }
        
        System.out.println("\nThis is pre-order :- ");
        for(int i : preorder){
            System.out.print(i+"=>");
        }
        
        System.out.println("\nThis is post-order :- ");
        for(int i : postorder){
            System.out.print(i+"=>");
        }
        

    }

    public static void main(String string[]){
        System.out.println("Hello");

        /*
         * In this solution we follow some rules :- 
         * 1) if (num == 1) {
                first we increase num by 1 and check if left node is exist then add in stack
                store number in in-order
            }
         * 2) if (num == 2) {
                first we increase num by 1 and check if right node is exist then add in stack
                store number in pre-order
            }
         * 3) if (num == 3){
                store number in  post-order
            }
         */

        /*
              1
             / \
            2   5
           / \ / \
          3  4 6  7
         */

        TreeNode root = new TreeNode(1);

        root.right = new TreeNode(5);
        root.left = new TreeNode(2);

        root.left.left = new TreeNode(3);
        root.left.right = new TreeNode(4);

        root.right.left = new TreeNode(6);
        root.right.right = new TreeNode(7);

        // time-complexity is O[3*n]
        // space-comlexity is O[n]

        T_85_all_OrderUsingOneStack.printAllOrder(root);


    }
}
