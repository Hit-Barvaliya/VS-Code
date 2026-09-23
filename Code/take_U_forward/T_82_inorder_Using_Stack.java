
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

class T_82_inorder_Using_Stack{

    public static void inorder(TreeNode  root){
        // preorder using stack

        Stack<TreeNode> sc = new Stack<>();

        TreeNode mover = root;

        while(true){

            if(mover != null){
                sc.push(mover);
                mover = mover.left;
            } else {
                if(sc.isEmpty()){
                    break;
                }
                mover = sc.pop();
                System.out.print(mover.data+"=>");
                mover = mover.right;
            }

        }

    }

    public static void main(String string[]){
        System.out.println("Hello");

        // hear we make a tree by us
        /*  in-order :- left ROOT right
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
        T_82_inorder_Using_Stack.inorder(root);


    }
}