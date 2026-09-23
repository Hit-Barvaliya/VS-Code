class A extends Thread {
    public void run (){
        for(int i=0;i<100;i++){
            System.out.println("Hi");
        }
    }
}
class B extends Thread {
    public void run () {
        for(int i=0;i<100;i++){
            System.out.println("Hello");
        }
    }
}



class a86_multial_threads {
    public static void main(String string[]){

        A obj1 = new A();
        B obj2 = new B();

        obj1.start();
        obj2.start();
        // with the help of thread we can execute both method at a same time
    }    
}
