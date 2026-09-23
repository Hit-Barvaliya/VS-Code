
import java.util.*;

class TreeNode{
    int data;
    TreeNode right,left;
    public TreeNode(int data) {
        this.data = data;
        right = left = null;
    }
    public TreeNode(){}
}

class T_81_preorder_Using_Stack{

    public static void preorder(TreeNode  root){
        // preorder using stack

        Stack<TreeNode> sc = new Stack<>();

        sc.add(root);

        System.out.println("This is pre-order using stack :- ");
        while(!sc.isEmpty()){
            TreeNode temp = sc.pop();
            System.out.print(temp.data+"=>");
            if(temp.right != null)  sc.add(temp.right);
            if(temp.left != null)  sc.add(temp.left);
        }

    }

    public static void main(String string[]){
        System.out.println("Hello");

        // hear we make a tree by us
        /*  pre-order :- ROOT left right
                     1
                    / \
                   2   7
                  / \
                 3   7
                    / \
                   5   6
        
         */
        

        TreeNode root = new TreeNode(1);

        root.right = new TreeNode(7);
        root.left = new TreeNode(2);
        
        root.left.left = new TreeNode(3);
        root.left.right = new TreeNode(7);
        
        root.left.right.left = new TreeNode(5);
        root.left.right.right = new TreeNode(6);

    // time-complexity is O[n] :- number of nodes
    // space-complexity is O[n] :- number of nodes (for the worst case)
    //     |-> O(logn) :- for the average case

        

        //print Tree level-by-level
        T_81_preorder_Using_Stack.preorder(root);


    }
}