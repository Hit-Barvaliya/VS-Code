
class Node {

    int data;
    Node next;

    Node(int data1,Node next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = null;
    }
}

class operation{
    Node head = null;

    public Node getHead(){return head;}

    public void convertarray2LL(int[] arr,int n){

        Node newnode = new Node(arr[0]);
        head = newnode;
        Node mover = head;
        for(int i=1;i<n;i++){
            Node temp = new Node(arr[i]);
            mover.next = temp;
            mover = mover.next;
        }
        mover.next = null;

        // Node first = new Node(arr[0],null);
        // Node mover = head;
        // for(int i=0;i<arr.length;i++){
        //     Node newnode = new Node(arr[i]);
        //     if(head == null){
        //         head = newnode;
        //     } else {
        //         mover.next = newnode;
        //         mover = mover.next;
        //     }
        // }

    }

    public void displayLL(){
        // time-complexity is O[n]
        Node mover = head;
        while(mover!=null){
            System.out.print(mover.data + " ");
            mover = mover.next;
        }
        System.out.println();
    }

    public int lengthOfLL(){
        // time-complexity is O[n]
        Node mover = head;
        int count = 0;
        while(mover!=null){
            count++;
            mover = mover.next;
        }
        return count;
    }
    
    public boolean elementIsPresentOrNot(int target){
        /* time-compleixty is for :- 
         * worst case :- O[n]
         * best cse :- O[1]
         * average case :- O[n/2];
         */
        Node mover = head;
        while(mover!=null){
            if(target==mover.data)
                return true;
            mover = mover.next;
        }
        return false;
    }

    public void insertElementAtIndexInLL(int element,int index){
        Node mover = head;
        int count = 0;
        while(mover != null){
            count++;
            if(count == index){
                Node temp = new Node(element);
                temp.next = mover.next;
                mover.next =temp;
                break;
            }
            mover = mover.next;
        }
    }

    public void insertElementBeforeTargetInLL(int element,int target){
        Node mover = head;
        Node preNode = mover;

            if(mover.data==target){
                Node temp = new Node(element);
                temp.next = mover;
                preNode.next = temp;
            }
            mover = mover.next;
        
        while(mover!=null){
            if(mover.data==target){
                Node temp = new Node(element);
                temp.next = mover;
                preNode.next = temp;
            }
            mover = mover.next;
            preNode = preNode.next;
        }
    }

    public void insertElemenAtStart(int element){
        // Node mover = head;
        Node temp = new Node(element);
        temp.next = head;
        head = temp;

    }

    public void deletFirstElementInLL(){
        Node mover = head;
        head = head.next;
        mover = null;
    }

    public void deletLastElemenInLL(){
        Node mover = head;
        Node temp = null;
        while(mover.next!=null){
            temp = mover;
            mover = mover.next;
        }
        mover = null;
        temp.next = null;
    }

//<=== Refer this fro Pratice ===>
    public void reverseLL(){
        Node temp1 = head;
        Node temp2 = null;
        Node temp3 = null;

        while(temp1!=null){
            temp3 = temp2;
            temp2 = temp1;
            temp1 = temp1.next;
            temp2.next = temp3;
        }
        head = temp2;
    }

    public void printLLInReverse(Node mover){
        if(mover==null) return;
        printLLInReverse(mover.next);
        System.out.print(mover.data + " ");
    }

    //<=== Refer this fro Pratice ===>
    public void changeHeadAndTail(){
        /* => this is not work for two node ::
        
        Node mover = head;
        Node tempH = head;

        while(mover.next.next != null)
            mover = mover.next;
        
            mover.next.next = head.next;
            head = mover.next;
            mover.next = tempH;
            tempH.next = null;
         
         */
           

        Node temp1 = head;
        Node temp2 = head;
        Node tempH = head;
        while(temp1.next != null){
            temp2 = temp1;
            temp1 = temp1.next;
            // this loop is to move temp2 behind temp1

            // while(temp2.next != temp1){
            //     temp2 = temp2.next; 
            // }
        }

        temp2.next = head;
        tempH = head.next;
        head.next = null;
        temp1.next = tempH;
        head = temp1;
        
    }

}

class LinkList {
    public static void main(String string[]){
        System.out.println("Hello");
        // Node n = new Node(3,null);
        // System.out.println(n.data);

        int arr[] = {1,2,3,4,5};
        operation op = new operation();

        op.convertarray2LL(arr,5);
        
        System.out.print("Your Link List is :- ");
        op.displayLL();

        System.out.println("The length of Link List is :- " + op.lengthOfLL());
        
        System.out.print("Your element is present or not :- " + op.elementIsPresentOrNot(4));
        System.out.println();

        op.insertElementAtIndexInLL(99,3);
        System.out.print("After entering the element at index 3 :- ");
        op.displayLL();
        System.out.println();

        op.insertElementBeforeTargetInLL( 123, 2);
        System.out.print("Insert the element before the target :- ");
        op.displayLL();
        System.out.println();   
        
        op.insertElemenAtStart(101);
        System.out.print("Insert the element at start :- ");
        op.displayLL();
        System.out.println();
        
        op.deletFirstElementInLL();
        System.out.print("Afetr the delet the frst elemen :- ");
        op.displayLL();
        System.out.println();

        op.deletLastElemenInLL();
        System.out.print("After delet the last element :- ");
        op.displayLL();
        System.out.println();

        op.reverseLL();
        System.out.print("After reversing the Link List :- ");
        op.displayLL();
        System.out.println();

        System.out.print("Print Link List in reverse order(Recursion) :- ");
        op.printLLInReverse(op.getHead());
        System.out.println("\n");

        System.out.print("Now This is your original Link List :- ");
        op.displayLL();
        System.out.println();

        System.out.println("Change head and tail :- ");
        op.changeHeadAndTail();
        op.displayLL();

// this is new function :- delet all the targated element in LL
/*
 
    public void deletElement(int target){
        Node mover = head;
        
        while(mover != null){
            if(mover.data == target){
                if(mover.next == null){
                   mover = null;
                } else if (mover.prev == null){
                   
                    head = head.next;
                    head.prev = null;
                } else {
                    mover.prev.next = mover.next;
                    mover.next.prev = mover.prev;
                }
            } 
            if (mover != null){
                mover = mover.next;
            }
           
        }
        
    }

 */



    }    
}



 









// this code is without head in operatinon class


// class Node {

//     int data;
//     Node next;

//     Node(int data1,Node next1){
//         data = data1;
//         next = next1;
//     }
//     Node(int data1){
//         data = data1;
//         next = null;
//     }
// }

// class operation{


//     public Node convertarray2LL(int[] arr){
//         Node head = new Node(arr[0],null);
//         Node mover = head;
//         for(int i=1;i<arr.length;i++){
//             Node temp = new Node(arr[i]);
//             mover.next = temp;
//             mover = temp;
//         }
//         return head;
//     }

//     public void displayLL(Node mover){
//         // time-complexity is O[n]
//         while(mover!=null){
//             System.out.print(mover.data + " ");
//             mover = mover.next;
//         }
//         System.out.println();
//     }

//     public int lengthOfLL(Node mover){
//         // time-complexity is O[n]
//         int count = 0;
//         while(mover!=null){
//             count++;
//             mover = mover.next;
//         }
//         return count;
//     }
    
//     public boolean elementIsPresentOrNot(Node mover,int target){
//         /* time-compleixty is for :- 
//          * worst case :- O[n]
//          * best cse :- O[1]
//          * average case :- O[n/2];
//          */
//         while(mover!=null){
//             if(target==mover.data)
//                 return true;
//             mover = mover.next;
//         }
//         return false;
//     }

//     public void insertElementAtIndexInLL(Node mover,int element,int index){
//         int count = 0;
//         while(mover != null){
//             count++;
//             if(count == index){
//                 Node temp = new Node(element);
//                 temp.next = mover.next;
//                 mover.next =temp;
//             }
//             mover = mover.next;
//         }
//     }

//     public void insertElementBeforeTargetInLL(Node mover,int element,int target){
//         Node preNode = mover;

//             if(mover.data==target){
//                 Node temp = new Node(element);
//                 temp.next = mover;
//                 preNode.next = temp;
//             }
//             mover = mover.next;
        
//         while(mover!=null){
//             if(mover.data==target){
//                 Node temp = new Node(element);
//                 temp.next = mover;
//                 preNode.next = temp;
//             }
//             mover = mover.next;
//             preNode = preNode.next;
//         }
//     }


// }

// class LinkList {
//     public static void main(String string[]){
//         System.out.println("Hello");
//         // Node n = new Node(3,null);
//         // System.out.println(n.data);

//         int arr[] = {1,2,3,4};
//         operation op = new operation();

//         Node head =  op.convertarray2LL(arr);
//         System.out.println(head.data);
        
//         System.out.print("Your Link List is :- ");
//         op.displayLL(head);

//         System.out.println("The length of Link List is :- " + op.lengthOfLL(head));
        
//         System.out.print("Your element is present or not :- " + op.elementIsPresentOrNot(head,4));
//         System.out.println();

//         op.insertElementAtIndexInLL(head,99,3);
//         System.out.print("After entering the element at index 3 :- ");
//         op.displayLL(head);
//         System.out.println();

//         op.insertElementBeforeTargetInLL(head, 123, 2);
//         System.out.println("Insert the element before the target :- ");
//         op.displayLL(head);
//         System.out.println();       

//     }    
// }
