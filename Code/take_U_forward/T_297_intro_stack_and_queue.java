import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

// LIFO principal
class Stack_Using_Array{

    // we nedd to define the size of an array so this is static data-structure
    private int arr[] = new int[10];
    private int size = 0,topEl = -1;

    public void push(int n){
        if(size < 10){
            arr[size] = n;
            size++;
            topEl++;
        } else {
            System.out.println("<== Your stack is Overflow ==>");
        }
    }

    public void pop(){
        if(size == 0){
            System.out.println("<== Your stack is under flow ==>");
        } else {
            arr[topEl] = 0;
            topEl--;
            size--;
        }
    }

    public int top(){
        if(topEl >= 0){
            return arr[topEl];
        } else {
            System.out.println("<== Your stack is empty ==>");
            return 0;
        }
    }

    public int size(){
        return size;
    }

    public void display(){
        for(int i=0;i<size;i++){
            System.out.print(arr[i] + "=>");
        }
        System.out.println();
    }

}

// FIFO pricnipal
class Queue_Using_Array{
    private int[] arr = new int[5];
    private int start = -1,end = -1,size = 5,curSize = 0;
  
   public void push(int var1) {
      if (curSize < size) {
         if (end >= size - 1) {
            end = (end + 1) % size; // this is for reuse the space which is empty at starting of array after deletion
         } else {
            end++;
         }

         arr[end] = var1;
         if (start == -1) {
            start++;
         }

        curSize++;
      } else {
         System.out.println("<== Your Queue is Over Flow ==>");
      }

   }

   public void pop() {
      if (curSize > 0) {
        arr[start] = 0;
         curSize--;
        if(start == end){
            start = -1;
            end = -1;
        } else {
             if (start >= size - 1) {
                start = (start + 1) % size;
            } else {
                start++;
            }
        }
      } else {
         System.out.println("<== Your Queue is Under Flow ==>");
      }

   }

   public int top() {
      if (start >= 0) {
         return arr[start];
      } else {
         System.out.println("<== Your Stack is empty ==>");
         return -1;
      }
   }

   public int size() {
      return curSize;
   }
}

class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
            next = null;
        }
        Node (){}
    }

    // all the operation has time-complexity is O[1] in both wiht LL


class Stack_Using_LL {

    private int size = 0;

    private Node head = null;

    public void push(int n){
        Node newNode = new Node(n);

        if(head == null){
            head = newNode;
            size++;
        } else {
            Node mover = head;
            while(mover.next != null)
                mover = mover.next;
            mover.next = newNode;
            size++;
        }
    }

    public void pop(){
        if(head == null){
            System.out.println("<== Your LL is Under Flow ==>");
        } else if (head.next == null){
            head = null;
            size--;
        } else {
            Node mover = head;
               while(mover.next.next != null)
                mover = mover.next;

            mover.next = null;
            size--;
        }
    }

    public int top(){
        if(size > 0){
            Node mover = head;
            while(mover.next != null)
                mover = mover.next;
            return mover.data;
        } else {
            return -1;
        }
    }

    public int size(){return size;}

    public void LL_Display(){
        if(size > 0){
            Node mover = head;
            while(mover != null){
                System.out.print(mover.data+"=>");
                mover = mover.next;
            }
        } else {
            System.out.println("YOUR LINK LIST IS EMPTY");
        }
    }

}

class Queue_Using_LL {

    // int front=-1,rare=-1;
    private int size=0;
    private Node head = null;

    public void push(int n){
        Node newNode = new Node(n);
        if(head == null){
            head = newNode;
        } else {
            Node mover = head;
            while(mover.next != null)
                mover = mover.next;
            
            mover.next = newNode;
        }
        size++;
    }

    public void pop(){
        if(head != null){
            Node mover = head;
            if(head.next != null){
                head = head.next;
            }
            mover = null;
            size--;
        } else {
            System.out.println("<== Your Queue is Under Flow ==>");
        }
    }

    public int top(){
        if(size == 0){
            System.out.println("<== Your Queue is Under Flow ==>");
            return -1;
        } else {
            return head.data;
        }
    }

    public int size(){return size;}

    public void display(){
        if(size > 0){
            Node mover = head;
            while(mover != null){
                System.out.print(mover.data+"=>");
                mover = mover.next;
            }
            System.out.println();
        } else {
            System.out.println("YOUR LINK LIST IS EMPTY");
        }
    }

}

class Stack_Using_Queue{
/* in java we have different name of operation
 * push() => add()
 * pop() => remove()
 * top() => peek()
 */

// time-complexity of push is O[n] near about and rest of all the operation's time-complexity is O[1]

    private Queue<Integer> qu = new LinkedList<>();
    // private int size = 0;
    public void push12(int n){
        qu.add(n);
        for(int i=1;i<qu.size();i++){
            // hear we can not write'<=' instade of '<' because we increase the size after the loop
            qu.add(qu.peek());
            qu.remove();
        }
        // size++;
    }

    public void pop(){
        if(qu.size() > 0){
            qu.remove();
            // size--;
        } else {
            System.out.println("<== Your Stack is Under Flow ==>");
        }
    }

    public int top(){
        if(qu.size() > 0){
            return qu.peek();
        } else {
            return -1;
        }
    }

    public int size(){return qu.size();}

    public void display(){
        System.out.println(qu);
    }

}

// this si not proper understand of second solution
class Queue_Using_Stack{

    Stack<Integer> s1 = new Stack<>();
    Stack<Integer> s2 = new Stack<>();

    public void push(int n){
        // ==> it's time-complexity is O[2n]
        // while(s1.size() > 0){
        //     s2.push(s1.peek());
        //     s1.pop();
        // }
        // s1.push(n);
        // while(s2.size() > 0){
        //     s1.push(s2.peek());
        //     s2.pop();
        // }

        s1.push(n);

    }
    
    // public void pop(){s1.pop();}
    public void pop(){
        if(!s2.empty()){
            s2.pop();
        } else {
            while(s1.size() > 0){
                s2.push(s1.peek());
                s1.pop();
            }
            s2.pop();
        }
    }

    public int top(){
        if(!s2.empty()){
            return s2.peek();
        } else {
             while(s1.size() > 0){
                s2.push(s1.peek());
                s1.pop();
            }
            return s2.peek();
        }
    }

    // public int size(){return s1.size();}
    public int size(){
        if(s1.size() > 0)
            return s1.size();
        else    
            return s2.size();
    }

    public void display(){
        if(s1.size() > 0)
            System.out.println(s1);
        else 
            System.out.println(s2);
    }

}



class T_297_intro_stack_and_queue{
    public static void main (String string[]){
        System.out.println("Hello");
        // this is for Stack using Array
        {
            Stack_Using_Array st = new Stack_Using_Array();
            st.push(1);
            st.push(2);
            st.push(3);
            st.push(4);
            st.push(5);
            st.push(6);
            st.push(7);
            st.push(8);
            st.push(9);
            st.push(10);
            
            st.pop();
            st.pop();
            st.pop();
            st.pop();
            st.pop();

            st.display();

            System.out.println("Top element is :- "+st.top());
            System.out.println("Stack size is :- "+st.size());

        }

        // this is Queue using Array
        {
            System.out.println("\n this is for Queue\n");
            Queue_Using_Array qu = new Queue_Using_Array();

            qu.push(1);
            qu.push(2);
            qu.push(3);
            qu.pop();
            qu.push(4);
            qu.push(5);
            qu.push(6);

            System.out.println(qu.top());
            qu.pop();
            System.out.println(qu.top());
            qu.pop();
            System.out.println(qu.top());
            qu.pop();
            System.out.println(qu.top());
            qu.pop();
            System.out.println(qu.top());
            qu.pop();
            System.out.println(qu.top());

        }    
    
        // this is Stack using LL
        {
            System.out.println("\n this is for Stack using LL\n");
            Stack_Using_LL scLL = new Stack_Using_LL();
            scLL.push(1);
            scLL.push(2);
            scLL.push(3);
            scLL.pop();
            System.out.println("This is top::"+scLL.top());
            System.out.println("This is size::"+scLL.size());
            scLL.pop();
            System.out.println("This is top::"+scLL.top());
            System.out.println("This is size::"+scLL.size());
            scLL.pop();
            System.out.println("This is top::"+scLL.top());
            System.out.println("This is size::"+scLL.size());
            scLL.pop();
            scLL.LL_Display();
            scLL.push(1);
            scLL.push(2);
            scLL.push(3);
            scLL.pop();
            scLL.LL_Display();
        }

        // this is Queue using LL
        {
            System.out.println("\n\n this is for Queue using LL\n");
            Queue_Using_LL quLL = new Queue_Using_LL();
            
            quLL.push(1);
            quLL.push(2);
            quLL.push(3);
            quLL.pop();
            quLL.push(4);
            quLL.push(5);
            quLL.push(6);
            System.out.println("This is top::"+quLL.top());
            quLL.pop();
            System.out.println("This is top::"+quLL.top());
            quLL.pop();
            System.out.println("This is top::"+quLL.top());
            quLL.display();
            quLL.pop();
            System.out.println("This is top::"+quLL.top());
            quLL.pop();
            System.out.println("This is top::"+quLL.top());
            quLL.display();
            quLL.pop();
            System.out.println("This is top::"+quLL.top());
            quLL.display();
            // quLL.pop();
            // System.out.println(quLL.top());

        }

        // stack using Queue
        {
            System.out.println("\n this is Stack using Queue \n");
            Stack_Using_Queue stqu = new Stack_Using_Queue();
            stqu.push12(1);
            stqu.push12(2);
            stqu.push12(3);
            stqu.push12(4);
            stqu.push12(5);
            System.out.print("This is full stack :- ");
            // in display function we will direct print the queue so it will print inreverse
            stqu.display();
            System.out.println("THis is top::"+stqu.top());
            stqu.pop();
            System.out.println("THis is top::"+stqu.top());
            stqu.pop();
            System.out.println("THis is top::"+stqu.top());
            stqu.pop();
            System.out.println("THis is top::"+stqu.top());
            stqu.pop();
            System.out.println("THis is top::"+stqu.top());
            // it will poplast element
            stqu.pop();
            System.out.println("THis is top::"+stqu.top());
            // har pop operation is done in empty queue
            stqu.pop();
            System.out.println("THis is top::"+stqu.top());
        }

        // Queue using stack
        {
            System.out.println("\n\n this is for Queue using Stack\n");
            Queue_Using_Stack qust = new Queue_Using_Stack();
            
            qust.push(1);
            qust.push(2);
            qust.push(3);
            qust.pop();
            qust.push(4);
            qust.push(5);
            qust.push(6);
            System.out.println("This is top::"+qust.top());
            qust.pop();
            System.out.println("This is top::"+qust.top());
            qust.pop();
            System.out.println("This is top::"+qust.top());
            // in display function we will direct print the queue so it will print inreverse
            qust.display();
            qust.pop();
            System.out.println("This is top::"+qust.top());
            qust.pop();
            System.out.println("This is top::"+qust.top());
            qust.display();
            qust.pop();
            System.out.println("This is size:"+qust.size());
            qust.display();

        }

    }
}

/*
 | **Aspect**     | **Your Version**                 | **Fixed Version**                             |
| -------------- | -------------------------------- | --------------------------------------------- |
| `extends Node` | ❌ used                           | ✅ removed                                     |
| Stack Push/Pop | At **end** → `O(n)`              | At **head** → `O(1)`                          |
| Queue Push/Pop | Both at **head traversal**       | Push at **tail**, pop at **head** (efficient) |
| Circular Queue | Overcomplicated                  | Clean modulo logic                            |
| Deletion       | Sometimes only cleared local ref | Proper unlinking                              |

 */

