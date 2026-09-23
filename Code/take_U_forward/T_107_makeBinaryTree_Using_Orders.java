
// for more understanding trace this code with more example

import java.util.*;

class T_107_makeBinaryTree_Using_Orders {

    public static TreeNode makeTree(int[] inorder,int[] postorder){

        Map<Integer,Integer> inMap = new HashMap<>();

        for(int i=0;i<inorder.length;i++){
            inMap.put(inorder[i], i);
        }


        TreeNode root = buildNode(inorder,0,inorder.length-1,postorder,0,postorder.length-1,inMap);

        return root;
    }

    private static  TreeNode buildNode (int[] inorder,int is,int ie,int[] postorder,int ps,int pe,Map<Integer,Integer> inMap){

        if(ps>pe || is>ie)    return null;

        TreeNode root = new TreeNode(postorder[pe]);

        int inRoot = inMap.get(postorder[pe]);
        int numleft = inRoot - is;          // number of left from the in-order

        // root.left = buildNode(inorder, is, is+numleft, postorder, ps, ps+numleft, inMap);
        root.left = buildNode(inorder, is, inRoot-1, postorder, ps, ps+numleft-1, inMap);

        // root.right = buildNode(inorder, inRoot+1, ie, postorder, ps+numleft, inRoot-1, inMap);
        root.right = buildNode(inorder, inRoot+1, ie, postorder, ps+numleft, pe-1, inMap);

       
        return root;
    }

    public static void inOrder(TreeNode node){
         if (node == null ){
            return;
        } else {
            inOrder(node.left);
            System.out.print(node.data+"=>");
            inOrder(node.right);
        }
    }

    public static void main(String string[]){
        System.out.println("Hello");

        // we can not make a unique tree with the help of pre-order & post-order
        // in-order is mandatory to make a unique binary tree and second is anything pre or post

        //hear we make tree with the help of in-order and pre-order

        int[] inorder = {40,20,50,10,60,30};
        int[] postorder = {40,50,20,60,30,10};

        // time-complexity is O[n]
        // space-complexity is O[n]

        TreeNode root = T_107_makeBinaryTree_Using_Orders.makeTree(inorder,postorder);

        // verify the in-Order of the same tree
        T_107_makeBinaryTree_Using_Orders.inOrder(root);

    }    
}
