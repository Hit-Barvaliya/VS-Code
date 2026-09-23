// when we want to this class has some perticular sub calss which was extends form this class
sealed class A permits B,C,D{
// here only 'B' 'C' and 'D' classes can extends form class 'A' no other class can extends
}

// here we use a 'final' or 'non-sealed' or 'sealed' key-words
final class B extends A{

}
non-sealed class C extends A{

}
sealed class D extends A permits E{

}
// class E extends A{       ==> this will throw an error
final class E extends D{

}



class b2_sealed{
    public static void main(String string[]){
        System.out.println("Hello World");
    }
}