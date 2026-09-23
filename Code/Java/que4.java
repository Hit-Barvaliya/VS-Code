class que4 {
    public static void main(String string[]){
        System.out.println("break at i==5");
        for(int i=1;i<=10;i++){
            if(i==5)
                break;
            System.out.println(i);
        }

        System.out.println("continue will work when i is even");
        for(int i=1;i<=10;i++){
            if(i%2 == 0)
                continue;
            System.out.println(i);
        }
    }    
}
