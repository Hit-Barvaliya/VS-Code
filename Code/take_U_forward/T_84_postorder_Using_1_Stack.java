
// for more understanding trace this code with more example

import java.util.*;


class T_84_postorder_Using_1_Stack {

    public static void postorder(TreeNode root){

        Stack<TreeNode> st = new Stack<>();

        ArrayList<Integer> answer = new ArrayList<>();

        TreeNode cur = root;

        while(cur!= null || !st.isEmpty()){
            if(cur!=null){
                st.add(cur);
                cur = cur.left;
            } else {
                TreeNode temp = st.peek().right;
                if(temp == null){
                    temp = st.peek();
                    st.pop();
                    answer.add(temp.data);
                    while(!st.isEmpty() && temp==st.peek().right){
                        temp = st.peek();
                        st.pop();
                        answer.add(temp.data);
                    }
                } else {
                    cur = temp;
                }
            }
        }

        System.out.println("This is post-order using one stack :- ");
        for (Integer i : answer) {
            System.out.print(i+"=>");
        }

    }

    public static void main(String string[]){
        System.out.println("Hello");

        // this is the post-order :- left right ROOT
        /*
                 1
                / \
               2   7
              /   /
             3   8
              \
               4
                \
                 5
                  \
                   6

         */

        TreeNode root = new TreeNode(1);

        root.right = new TreeNode(7);
        root.right.left = new TreeNode(8);

        root.left = new TreeNode(2);

        root.left.left = new TreeNode(3);
        
        root.left.left.right = new TreeNode(4);
        root.left.left.right.right = new TreeNode(5);
        root.left.left.right.right.right = new TreeNode(6);

        // time-complexity is O[2*n] for theworst case
        // space-complexity is O[n]

        T_84_postorder_Using_1_Stack.postorder(root);


    }    
}
