enum Status {
    Running, Faild, Pending, Success; 
}


class a68_enum_intro {
    public static void main(String string[]){

        Status s = Status.Faild;
        System.out.println(s);

        System.out.println(s.ordinal()); // it will returb the index

        Status[] ss = Status.values();
        System.out.println(ss[2]);      // it will return the value

        for(Status c : ss){
            System.out.println(c + " : " + c.ordinal());
        }

    }    
}
