
import java.util.Stack;

class T_299_InfixToPostfix{

    private static int precedence(Character ch){
        return switch(ch){
            case '^' ->  3;
            case '*','/' -> 2;
            case '+','-' -> 1;
            default ->  -1;
        };
    }
    
    public static void infixToPostfix(String str){
    // time-complexity is O[n]+O[n]
    // space-complexity is O[n]+O[n] 

    /*  This is for understanding
     * in stack if we have top charcter's precedence was 'high or equal' then new charcter's precedence then we add that stack's top charcter is add in the answer and remove from the stack after this precoss we add that new charcter in stack.
     */

        String ans = "";
        int i = 0;
        Stack<Character> st = new Stack<>();

        while(i<str.length()){

            if((str.charAt(i)>='A'&&str.charAt(i)<='Z')||
                (str.charAt(i)>='a'&&str.charAt(i)<='z')||
                (str.charAt(i)>='0'&&str.charAt(i)<='9')){
                    ans += str.charAt(i);
            } else if (str.charAt(i) == '('){
                st.push(str.charAt(i));
            } else if (str.charAt(i) == ')'){
                while(!st.isEmpty() && st.peek()!='('){
                    ans += st.peek();
                    st.pop();
                }
                st.pop();
            } else {
                while(!st.isEmpty() && precedence(str.charAt(i))< precedence(st.peek())){
                    ans += st.peek();
                    st.pop();
                }
                st.push(str.charAt(i));
            }

            i++;
        }

        while(!st.isEmpty()){
            ans += st.peek();
            st.pop();
        }

        System.out.println("infixToPostfix conversion :- "+ans);

    }

    public static void infixToPrefix(String str){
    // time-complexity is O[n]+O[n]
    // space-complexity is O[n]+O[n]

        String ans = "";

        str = new StringBuffer(str).reverse().toString();
        str = str.replaceAll("[\\(]", ")");
        str = str.replaceAll("[\\)]", "(");
        int i=0;
        Stack<Character> st = new Stack();

        // System.out.println("This is input::"+str);

        while(i<str.length()){
            if((str.charAt(i)>='A'&&str.charAt(i)<='Z')||
                (str.charAt(i)>='a'&&str.charAt(i)<='z')||
                (str.charAt(i)>='0'&&str.charAt(i)<='9')){
                    ans += str.charAt(i);
            } else if (str.charAt(i) == '('){
                st.push(str.charAt(i));
            } else if (str.charAt(i) == ')'){
                while(!st.isEmpty() && st.peek()!='('){
                    ans += st.peek();
                    st.pop();
                }
                st.pop();
            } else{

                if(str.charAt(i) == '^'){
                    while(!st.isEmpty() && precedence(str.charAt(i)) <= precedence(st.peek())){
                        ans += st.peek();
                        st.pop();
                    }
                    st.push(str.charAt(i));

                } else {
                    while(!st.isEmpty() && precedence(str.charAt(i)) < precedence(st.peek())){
                        ans += st.peek();
                        st.pop();
                    }
                    st.push(str.charAt(i));

                }
                // st.pop();
            }
            i++;

        }

        while(!st.isEmpty()){
            ans += st.peek();
            st.pop();
        }

        ans = new StringBuffer(ans).reverse().toString();

        System.out.println("infixToPrefix conversion :- "+ans);

    }

    public static void postFixToInfix(String s){    // time-complexity is O[n]
        // |->some programming language might take some time at add two string and it's time is O[n1+n1] which is not included in the upper time
    // space-complexity is O[n]
        int i=0;
        Stack<String> st = new Stack<>();

        while(i<s.length()){
            char ch = s.charAt(i);
            if(ch>='A'&&ch<='Z' ||
               ch>='a'&&ch<='z' ||
               ch>='0'&&ch<='9'){

                st.push(s.substring(i,i+1));
               }
               else {
                String temp1 = st.pop();
                String temp2 = st.pop();

                String ans = "(" + temp2 + s.substring(i,i+1) + temp1 + ")";
                st.push(ans);
               }
            i++;
        }

        System.out.println("postFixToInfix conversion :- "+st.peek());

    }

    public static void prefixToInfix(String s){
    // same as postfix-to-infix
        int i = s.length()-1;
        Stack<String> st = new Stack<>();
        while(i>=0){
            char ch = s.charAt(i);
            if(ch>='A'&&ch<='Z' ||
               ch>='a'&&ch<='z' ||
               ch>='0'&&ch<='9'){

                st.push(s.substring(i,i+1));
               } else {
                String temp1 = st.pop();
                String temp2 = st.pop();

                String ans = "("+temp1+s.substring(i, i+1)+temp2+")";
                st.push(ans);
               }
            i--;
        }
        System.out.println("prefixToInfix conversion :- "+st.peek());
    }

    public static void postfixToPrefix(String s){
        // hear we can also convert postfix-to-infix thenafter infix-to-prefix                  but given approch is optmised
        int i=0;
        Stack<String> st = new Stack<>();

        while(i<s.length()){
            char ch = s.charAt(i);
            if(ch>='A'&&ch<='Z' ||
               ch>='a'&&ch<='z' ||
               ch>='0'&&ch<='9'){

                st.push(s.substring(i,i+1));
            } else {
                String temp1 = st.pop();
                String temp2 = st.pop();

                String ans = s.substring(i, i+1) + temp2 + temp1;
                st.push(ans);
            }
            i++;
        }

        System.out.println("postfixToPrefix conversion :- "+st.pop());
    }

    public static void prefixToPostfix(String s){
        int i=s.length()-1;
        Stack<String> st = new Stack<>();

        while(i>=0){
            char ch = s.charAt(i);
            if(ch>='A'&&ch<='Z' ||
               ch>='a'&&ch<='z' ||
               ch>='0'&&ch<='9'){

                st.push(s.substring(i,i+1));
            } else {
                String temp1 = st.pop();
                String temp2 = st.pop();
                String ans = temp1 + temp2 +s.substring(i, i+1);
                st.push(ans);
            }
            i--;
        }

        System.out.println("prefixToPostfix conversion :- "+st.pop());

    }

    public static void main(String string[]){
        System.out.println("Hello");

        infixToPostfix("a^b^c");
        
        infixToPrefix("a+b*c+d");

        postFixToInfix("abc^^");

        prefixToInfix("++a*bcd");

        postfixToPrefix("ab-de+f*/"); 

        prefixToPostfix("/-ab*+def");
        

    }
}