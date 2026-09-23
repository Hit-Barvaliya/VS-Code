
import java.util.LinkedList;
import java.util.Queue;

class TreeNode{
    int data;
    TreeNode right,left;
    public TreeNode(int data) {
        this.data = data;
        right = left = null;
    }
    public TreeNode(){}
}

class T_80_TreeTraversal{

    public static void printTree(TreeNode  root){
        // print tree level by level

        Queue<TreeNode> qu = new LinkedList<>();
        
    // we have two mwthod to add an element add() and offer()

    // offer() :- If the queue has a fixed capacity and is full, offer() will return false, indicating that the element could not be inserted.
    
    // add() :- In contrast, add() would throw an IllegalStateException in the same scenario.

    // time-complexity is O[n] and space-complexity is O[n]

        int count = 1;
        qu.add(root);

        while(!qu.isEmpty()){
            int size = qu.size();
            
            System.out.println("\nThis is level :- "+count);
            for(int i=1;i<=size;i++){
                TreeNode temp = qu.poll();
                System.out.print(temp.data + "=>");
                if(temp.right != null)  qu.add(temp.right);
                if(temp.left != null)  qu.add(temp.left);
            }
            System.out.println();
            count++;

        }
        
    }

    public static void main(String string[]){
        System.out.println("Hello");

        // hear we make a tree by us

        /*
            1
           / \
         30   20
        / \   / \
      700 600 500 400

         */

        TreeNode root = new TreeNode(1);

        root.right = new TreeNode(20);
        root.left = new TreeNode(30);

        root.right.right = new TreeNode(400);
        root.right.left = new TreeNode(500);

        root.left.right = new TreeNode(600);
        root.left.left = new TreeNode(700);

        //print Tree level-by-level
        T_80_TreeTraversal.printTree(root);


    }
}