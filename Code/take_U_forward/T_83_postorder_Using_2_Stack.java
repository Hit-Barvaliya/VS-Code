
import java.util.*;

class T_83_postorder_Using_2_Stack {

    public static void postorder(TreeNode root){
        // this is the post order using two stack

        Stack<TreeNode> sc1 = new Stack<>();
        Stack<TreeNode> sc2 = new Stack<>();

        sc1.add(root);

        while(!sc1.isEmpty()){
            TreeNode temp = sc1.pop();
            sc2.add(temp);
            if(temp.left != null)  sc1.add(temp.left);
            if(temp.right != null)  sc1.add(temp.right);
        }

        System.out.println("This is an post order using 2 stack :- ");
        while(!sc2.isEmpty())
            System.out.print(sc2.pop().data+"=>");

    }

    public static void main (String string[]){
        System.out.println("Hello");

        /*
                1
               / \
              2   3
             / \  /
            4   5 6
                   \
                    7
                     \
                      8

         */

        TreeNode root = new TreeNode(1);     // this is same as previous code

        root.right = new TreeNode(3);
        root.left = new TreeNode(2);

        root.left.right = new TreeNode(5);
        root.left.left = new TreeNode(4);

        root.right.left = new TreeNode(6);

        root.right.left.right = new TreeNode(7);

        root.right.left.right.right = new TreeNode(8);

        // time-complexity is O[n]
        // space-complexity is O[2*n]

        T_83_postorder_Using_2_Stack.postorder(root);

    }    
}
