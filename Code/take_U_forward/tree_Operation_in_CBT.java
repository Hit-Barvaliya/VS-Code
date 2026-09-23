
class ComplateBinaryTree{
    int data;
    ComplateBinaryTree right;
    ComplateBinaryTree left;

    
    public ComplateBinaryTree() {
    }
    ComplateBinaryTree(int data){
        this.data = data;
        right = null;
        left = null;
    }
}

class CBT_Operation{
    ComplateBinaryTree root = new ComplateBinaryTree();

    public void makeTree(){
        root.data = 10;
        ComplateBinaryTree c1 = new ComplateBinaryTree(15);
        ComplateBinaryTree c2 = new ComplateBinaryTree(17);
        ComplateBinaryTree c3 = new ComplateBinaryTree(18);
        ComplateBinaryTree c4 = new ComplateBinaryTree(19);
        ComplateBinaryTree c5 = new ComplateBinaryTree(20);
        ComplateBinaryTree c6 = new ComplateBinaryTree(22);

        root.left = c1;
        root.right = c2;
        c1.left = c3;
        c1.right = c4;
        c2.left = c5;
        c2.right = c6;
        System.out.println("Making trre is done");
    }

    public void inorder(){
        if(root == null){
            System.out.println("Your Tree is empty");
        } else {
            System.out.print("\nThis is In-order :- ");
            display1(root);

        }
    }
    private void display1(ComplateBinaryTree node){
        // Follow this rule :- Left ROOT Right  (Inorder)
        
        // if(node == null){
        //     return;
        // } else 
        if(node.right == null && node.left == null){
            System.out.print(node.data + "=>");
        } else {
            display1(node.left);
            System.out.print(node.data+"=>");
            display1(node.right);
        }
    }

    public void preorder(){
        if(root == null){
            System.out.println("Tree is empty");
        } else {
            System.out.print("\nThis is pre-order :- ");
            display2(root);
        }
    }
    private void display2(ComplateBinaryTree node){
        // Follow this rule :- ROOT Left Right  (preorder)
        
        // if(node == null){
        //     return ;
        // } else 
        if (node.left == null && node.right == null){
            System.out.print(node.data+"=>");
        } else {
            System.out.print(node.data+"=>");
            display2(node.left);
            display2(node.right);
        }
    }

    public void postorder(){
        if(root == null){
            System.out.println("Youe TREE is empty");
        } else {
            System.out.print("\nThis is Post-order :- ");
            display3(root);
        }
    }
    private void display3(ComplateBinaryTree node){
        // Folow this rule :- Left Right ROOT   (post-order)

        // if(node == null){
        //     return ;
        // } else {
        if (node.left == null && node.right == null){
            System.out.print(node.data+"=>");
        } else {
            display3(node.left);
            display3(node.right);
            System.out.print(node.data+"=>");
        }
    }

    public void addElement(int data){
        if(root == null){
            root.data = data;
        } else {
            set(data,root,0);
        }
    }
    public void set(int data,ComplateBinaryTree node,int check){
        if(node == null){
            return;            
        } else if (node.right != null && node.left == null){
            if(check == 0){
                ComplateBinaryTree temp = new ComplateBinaryTree(data);
                node.left = temp;
                check = 1;
            }
        } else if (node.right == null && node.left == null){
            if(check == 0){
                ComplateBinaryTree temp = new ComplateBinaryTree(data);
                node.right = temp;
                check = 1;
            }
        } else {
            set(data,node.left,check);
            set(data,node.right,check);
        }
    }

    // public void show(){
    //     System.out.println(root.left.left.right.data);
    // }
    

}

class tree_Operation_in_CBT {
    public static void main(String string[]){
        System.out.println("Hello");

        CBT_Operation obj = new CBT_Operation();
        obj.makeTree();
        obj.inorder();
        obj.preorder();
        obj.postorder();
        obj.addElement(999);
        System.out.print("\nThis is for show :- ");
        // obj.show();
    }    
}
