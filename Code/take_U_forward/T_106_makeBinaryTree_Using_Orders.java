
// for more understanding trace this code with more example

import java.util.*;

class T_106_makeBinaryTree_Using_Orders {

    public static TreeNode makeTree(int[] inorder,int[] preorder){

        Map<Integer,Integer> inMap = new HashMap<>();

        for(int i=0;i<inorder.length;i++){
            inMap.put(inorder[i], i);
        }


        TreeNode root = buildNode(preorder,0,preorder.length-1,inorder,0,inorder.length-1,inMap);

        return root;
    }

    private static  TreeNode buildNode (int[] preorder,int preStart,int preEnd,int[] inorder,int inStart,int inEnd,Map<Integer,Integer> inMap){

        if(preStart>preEnd || inStart>inEnd)    return null;

        TreeNode root = new TreeNode(preorder[preStart]);

        int inRoot = inMap.get(preorder[preStart]);
        int numleft = inRoot - inStart;

        root.left = buildNode(preorder, preStart+1, preStart+numleft, inorder, inStart, inRoot-1, inMap);

        root.right = buildNode(preorder, preStart+numleft+1, preEnd, inorder, inRoot+1, inEnd, inMap);

        return root;
    }

    public static void inOrder(TreeNode node){
         if (node.left == null){
            System.out.print(node.data+"=>");
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

        int[] inorder = {9,3,15,20,7};
        int[] preorder = {3,9,20,15,7};

        // time-complexity is O[n]
        // space-complexity is O[n]

        TreeNode root = T_106_makeBinaryTree_Using_Orders.makeTree(inorder,preorder);

        // verify the in-Order of the same tree
        T_106_makeBinaryTree_Using_Orders.inOrder(root);

    }    
}
