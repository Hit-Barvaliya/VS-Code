
// this is circular singly link-list

import java.util.Scanner;

class Node {
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        next = null;
    }
    public Node(){
        this.data = 0;
        next = null;
    }
}

class Operation {
    Node head;
    int length = 0;
    Scanner sc = new Scanner(System.in);


    public Node creatLL(){

        System.out.println("Enter '-1' to end the array ");
        int num = 0;
        
        while(num != -1){
            System.out.println("Enter the element of array :- ");
            num = sc.nextInt();
            
            if(num == -1){
                System.out.println("Your linked list is over :- ");
            } else {
                Node temp = new Node(num);
                if(head == null){
                    head = temp;
                    length++;
                } else {
                    
                    Node mover = head;
                    while(mover.next != null){
                        mover = mover.next;
                    }
                    mover.next = temp;
                    length++;

                }
            }

        }

        Node mover = head;
        while(mover.next != null){
            mover = mover.next;
        }
        mover.next = head;


        if(head==null){
            System.out.println("You have no element :- ");
        } else {

            return head;
        }
        return head;

    }


    // this is to display the LL
    public void display(Node headNode){
        Node temp = headNode;
        int count = 0;
        // while(temp != null){     ==>this condition is not workin the circular linked list
        while(count < length){
            System.out.print(temp.data + " ");
            temp = temp.next;
            count++;
        }
    }

}


class CircularLinkList {
    public static void main(String string[]){
        System.out.println("Hello ");

        Node ll1 = new Node();
        Operation op = new Operation();

        ll1 = op.creatLL();
        op.display(ll1);



    }    
}
