class A {
    public void showDataWhichBeLongsToThisClass(){
        System.out.println("in A Show");
    }
}
class B extends A {
    // -> we are always to give a proper name to the method so,sometimes it become larger
    // -> at that time we need to give some extra instruction to the compiler at compile-time it's called annotation
    // -> we have lot of in-built annotation
    @Override
    public void showDataWhichBeLongsToThisClass(){
        System.out.println("in B show");
    }
}


class a71_annotation {
    public static void main(String string[]){
        System.out.println("Hello");

        B obj = new B();
        obj.showDataWhichBeLongsToThisClass();

    }    
}
