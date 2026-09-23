class que2 {
    public static void main(String string[]){
        int a = 2,b = 10;
        System.out.println("left bitwise of 2 :- " + (a<<2));
        System.out.println("right betwise of 2 :- " + (a>>1));

        if(a%2==0 && b%2==0)    System.out.println("bith are even number ::");

        if(a>10 || b>10)     System.out.println("one of these two number is more then 10::");
    }    
}
