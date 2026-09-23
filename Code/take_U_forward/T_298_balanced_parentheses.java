
import java.util.Stack;

class T_298_balanced_parentheses {

    public static void checkParenthese(String s){
        int i=0;
        Stack<Character> st = new Stack<>();

        while(i<s.length()){
            char ch = s.charAt(i);
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            } else {
                if(st.isEmpty()){
                    System.out.println("You have not balanced parentheses.");
                    return;
                }
                if(ch==')'&&st.peek()=='('){
                    st.pop();
                } else if (ch=='}'&&st.peek()=='{'){
                    st.pop();
                } else if (ch==']'&&st.peek()=='['){
                    st.pop();
                } else {
                    System.out.println("You have not balanced parentheses.");
                    return;
                }
            }
            i++;
        }

        System.out.println("You have balanced parentheses.");

    }

    public static void main(String string[]){
        
        System.out.println("Hello");

        checkParenthese("({[]})");

        checkParenthese("({[](){[]}}[])");

    }    
}

