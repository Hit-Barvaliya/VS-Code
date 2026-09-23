interface A {
    default void hello() {
        System.out.println("A");
    }
}

interface B {
    default void hello() {
        System.out.println("B");
    }
}

class C implements A, B {
    @Override
    public void hello() {
        A.super.hello(); // call A’s version
        B.super.hello(); // call B’s version
    }
}

class superWithThis {
    public static void main(String[] args) {
        new C().hello();
    }
}
