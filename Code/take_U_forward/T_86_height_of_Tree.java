class T_86_height_of_Tree {

    public static int heightUsingRecursion(TreeNode root){
        if(root == null)    return 0;
        return 1+Integer.max(T_86_height_of_Tree.heightUsingRecursion(root.right),T_86_height_of_Tree.heightUsingRecursion(root.left));
    }

    public static void main(String string[]){
        System.out.println("Hello");

        // height of tree using recursion

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
        // we can also use a level-order traversal for this solution

        TreeNode root = new TreeNode(1);

        root.right = new TreeNode(7);
        root.right.left = new TreeNode(8);

        root.left = new TreeNode(2);

        root.left.left = new TreeNode(3);
        
        root.left.left.right = new TreeNode(4);
        root.left.left.right.right = new TreeNode(5);
        root.left.left.right.right.right = new TreeNode(6);

        System.out.println("Height of given tree is :- "+T_86_height_of_Tree.heightUsingRecursion(root));

    }    
}
