class A {
    public void show(){
        System.out.println("in A Show");
    }
}


class a63_anonymus_inner_class {
    public static void main(String string[]){
        // anonymous simply meaning is something which does not have name

        A obj1 = new A();
        obj1.show();

        /* when we are use this
         * if we want to change the show method for one time use , we use this
         */
        A obj2 = new A(){       // this is called a anonymous inner class
            public void show(){
                System.out.println("in new show");
            }
        };
        obj2.show();

        A obj3 = new A();
        obj3.show();


    }    
}
