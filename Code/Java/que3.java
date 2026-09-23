class que3 {
    public static void main(String string[]){
        int a = 10, b = 10,c = 30;
        if(a<b)
            System.out.println("This is big number :- " + b);
        else 
            System.out.println("This is big number :- " + a);

        if(a%2==0){
            if(b<c)
                System.out.println("a is even number and c is big number");
            else
                System.out.println("a is even number and b is big number");
        } else {
             if(b<c)
                System.out.println("a is odd number and c is big number");
            else
                System.out.println("a is odd number and b is big number");
        }

    }    
}
