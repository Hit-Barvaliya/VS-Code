class Node {
    int data;
    Node pre;
    Node next;
    public Node(int data){
        this.data = data;
        pre = null;
        next = null;
    }
}

class operation {
    Node head = null;
    // Node tail = null;

    public void creatLL(int arr[],int n){
        Node temp1 = new Node(arr[0]);
        head = temp1;
        Node temp2 = null;
        for(int i=1;i<n;i++){
            Node newnode = new Node(arr[i]);
            temp2 = temp1;
            temp1.next = newnode;
            temp1 = temp1.next;
            temp1.pre = temp2;
            // tail = temp1;
        }

    }

    public void displayLL(){
        Node mover = head;
        while(mover!=null){
            System.out.print(mover.data + " ");
            mover = mover.next;
        }
    }

    public void displayReverseLL(){
        Node mover = head;
        while(mover.next!=null){
            mover = mover.next;
        }
        while(mover!=null){
            System.out.print(mover.data +" ");
            mover = mover.pre;
        }

        // Node mover = tail;
        // while(mover!=null){
        //     System.out.print(mover.data + " ");
        //     mover = mover.pre;
        // }
    }

    public void addHeadInLL(int n){
        Node temp = head;

        Node newnode = new Node(n);

        temp.pre = newnode;
        newnode.next = temp;

        head = head.pre;
    }

    public void addTailLL(int n){
        Node mover = head;
        while(mover.next!=null){
            mover = mover.next;
        }
        Node newnode = new Node(n);
        mover.next = newnode;
        newnode.pre = mover;
        // tail = newnode;
    }

    public void inserteAfterTarget(int element,int target){
        Node temp1 = head.next;
        Node temp2 = head;
        while(temp2!=null){
            if(temp2.data==target){
                if(temp1==null){
                    Node newnode = new Node(element);
                    temp2.next = newnode;
                    newnode.pre = temp2;
                }  else {
                    Node newnode = new Node(element);
                    newnode.next = temp1;
                    temp1.pre = newnode;
                    newnode.pre = temp2;
                    temp2.next = newnode;
                }
                break;              
            }
            temp2 = temp1;
            temp1 = temp1.next;
        }
    }

    public void reverseLL(){
        if(head == null){
            System.out.println("Your Link List is empty :- ");
        } else if(head.next != null) {
            Node temp = null;
            Node current = head;
            while(current != null){
                // temp.next = temp.pre;
                // temp.pre = current;
                // temp = current;
                // current = current.next;
                temp = current.pre;
                current.pre = current.next;
                current.next = temp;
                current = current.pre;
            }

            if(temp != null ){
                head = temp.pre;
            }

        }
        System.out.println("Your reveerse function is done ::");
    }
}


// <----------------------------- this is main function ------------------------>
class DoublyLinkList {
    public static void main(String string[]){
        // System.out.println("Hello");

        int arr[] = {1,2,3,4,5};

        operation op = new operation();
        op.creatLL(arr, 5);

        System.out.print("Your Link List is :- ");
        op.displayLL();
        System.out.println("\n");

        System.out.print("Your LinkList in reverse order :- ");
        op.displayReverseLL();
        System.out.println("\n");

        System.out.print("After entering the elemen at start :- ");
        op.addHeadInLL(99);
        op.displayLL();
        System.out.println("\n");

        System.out.print("After entering the elemen at last :- ");
        op.addTailLL(123);
        op.displayLL();
        System.out.println("\n");

        System.out.print("Enter the element after target in Link List :- ");
        op.inserteAfterTarget(111, 3);
        op.displayLL();
        System.out.println("\n");

        // op.displayReverseLL();

        op.reverseLL();
        op.displayLL();

        // this is fro delet the element
        
        /*
    public void deletElement(int target){
        Node mover = head;
        int check = 0;
        
        while(mover != null){
            
            if(mover.data == target){
                check = 1;
                break;
            }
            mover = mover.next;
        }
        
        if(check == 1 && mover.next == null ){

            Node temp = mover.prev;
            temp.next = null;
            mover = null;

        } else if(check == 1){
            Node temp = mover.prev;
            temp.next = mover.next;
            mover.next.prev = temp;
            mover = null;
        }               
    }
         */

    }    
}
