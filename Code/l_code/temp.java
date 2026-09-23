
class Node{
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        this.next = null;
    }
}



public class temp {
    static Node ead = null;

    static Node ead2 = null;    

    public static void insertEle(int data){

        if(ead == null){
            ead = new Node(data);
            System.out.println("Head is null");
        } else {

            Node mover = ead;

            while(mover.next != null){
                mover = mover.next;
            }
            mover.next = new Node(data);

            System.out.println("Element inserted");

        }

    }


    public static void main(String[] args) {
        System.out.println("Hello World");

        int[] arr = {1, 2, 3, 4, 5};



        for(int i=0;i<arr.length;i++){
            insertEle(arr[i]);
        }

        Node temp = ead;

        System.out.println(ead.data);


        while(temp != null){
            System.out.println(temp.data);
            temp = temp.next;
        }


    }
}
