
// '...' operator is called varargs operator in Java

class Varargs_Operator {

    static int findLength(int ... numbers){
        int total = 0;
        for(int i : numbers){
            total++;
        }
        return total;
    }

    public static void main(String string[]){

        System.out.println("Hello");

        System.out.println(Varargs_Operator.findLength(1,2,3,4));
        System.out.println(Varargs_Operator.findLength(1,2,3,4,5,6));
        System.out.println(Varargs_Operator.findLength(1,2));
        System.out.println(Varargs_Operator.findLength(1,2,3,4,5,6,7,8,9,10,11,12));

    }    
}
