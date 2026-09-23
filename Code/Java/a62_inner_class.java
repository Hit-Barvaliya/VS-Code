class A {
    int data;

    public void show(){
        System.out.println("in A Show");
    }

    class B {
        public void show1(){
            System.out.println("in B Show");
        }
    }
}


class a62_inner_class{
    public static void main(String string[]){
        System.out.println("Hello");

    // we can not creat a static class which is outer class
    // we can make inner class as static class
        A obj = new A();
        obj.show();

        A.B obj1 = obj.new B();
        /* if inner class is static class
         * A.B obj1 = new A.B();
         */
        obj1.show1();
    }
}