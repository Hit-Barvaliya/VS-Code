class justify_string {
    public static void main(String string[]){
        String str = "Java";
        /*   %-15s means:

            '-'→ Left-justify

            15 → Total width

            s → String
         */
        //-> for right alignment remove '-' sign 
        System.out.printf("%-15s",str);
        System.out.println("HELLO");
        System.out.printf("%-15s","wellcome");
        System.out.println("HELLO\n");

        int x = 9;
        System.out.printf("%03d\n",x);
        System.out.printf("%03d\n",45);
        System.out.printf("%03d\n",234);

        // -> we can also marge these two line :- 

        System.out.printf("%-15s%03d","Java",12);
    }    
}
