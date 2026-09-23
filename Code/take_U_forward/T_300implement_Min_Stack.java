// push pop top size min-ele
import java.util.Stack;

class StackImplementation{
    // time-complexity is O[1] for all
    // space-complexity is O[2n]
    Stack<int[]> st = new Stack<>();

    public void push(int arr){
        if(st.isEmpty()){
            st.push(new int[]{arr,arr});
        } else {
            // int temp[] = {arr, st.peek()[0]<arr ? st.peek()[0] : arr };
            int temp[] = {arr,Integer.min(arr,st.peek()[0])};
            st.push(temp);

            // st.push(new int[]{arr[0], st.peek()[0]<arr[0] ? st.peek()[0] : arr[0] });

        }
    }

    public void pop(){
        if(st.isEmpty()){
            System.out.println("<--- YOUR STACK IS EMPTY --->");
            return;
        } else {
            st.pop();
        }
    }

    public int peek(){
        if(st.isEmpty()){
            System.out.println("<--- YOUR STACK IS EMPTY --->");
            return -1;
        } else {
            return st.peek()[0];
        }
    }

    public int size(){
        return st.size();
    }

    public int minEle(){
        return st.peek()[1];
    }

}

class StackImplementation2{
    Stack<Integer> st = new Stack<>();
    int minval = Integer.MIN_VALUE;

    public void push(int val){
        if(st.isEmpty()){
            st.push(val);
            minval = val;
        } else {
            if(val > minval){
                st.push(val);
            } else {
                st.push(2*val - minval);
                minval = val;
            }
        }
    }

    public void pop(){
        if(st.isEmpty()){
            System.out.println("<--- YOUR STACK IS EMPTY --->");
            return;
        }
        if(st.peek() < minval){
            minval = 2*minval - st.peek();
            st.pop();
        } else {
            st.pop();
        }

    }

    public int peek(){
        if(st.isEmpty()){
            System.out.println("<--- YOUR STACK IS EMPTY --->");
            return -1;
        } else {
            if(st.peek() < minval){
                return minval;
            } else {
                return st.peek();
            }
        }
    }

    public int minEle(){
        return minval;
    }
}

class T_300implement_Min_Stack {
    public static void main(String string[]){
        System.out.println("Hello");

        StackImplementation s = new StackImplementation();

        s.push(12);
        s.push(15);
        s.push(10);
        System.out.println(s.minEle());
        s.pop();
        System.out.println(s.peek());
        System.out.println(s.minEle());

        System.out.println("\n<--- This is for new Implementation --->\n");

        StackImplementation2 s2 = new StackImplementation2();
        
        s2.push(12);
        s2.push(15);
        s2.push(10);
        System.out.println(s2.minEle());
        s2.pop();
        System.out.println(s2.peek());
        System.out.println(s2.minEle());

    }    
}
