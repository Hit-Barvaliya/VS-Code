class a19_for_loop{
    public static void main(String string[]){
        for(int i=1;i<=5;i++){
            System.out.println("Hello " + i);
            for(int j=1;j<=6;j++){
                System.out.println("    " + (j+8) + " - " + (j+9));
            }
        }
    }
}