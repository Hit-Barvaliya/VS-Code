//every do-while loop has semi-colon->';'

class a18_do_while_loop{
    public static void main(String string[]){
        int i=1;
        do{
            System.out.println("Hi "+ i);
            i++;

            int j=1;
            do{
                System.out.println("Hello" + j);
                j++;
            }while(j<=3);
            
        }while(i<=4);       // ==> ";" =>this is important in this loop
    }
}