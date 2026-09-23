class calculator{

    int a;      //--> this is called a variable

    public int add(int n1,int n2){      //--> this is called method
        int r = n1 + n2;
        return r;
    }

}
class a20_class_object{
    public static void main(String string[]){

        calculator calc = new calculator();
        int num1 = 10,num2 = 20;

        int result = calc.add(num1,num2);

        System.out.println(result);
        
    }
}