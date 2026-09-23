// -> we can not run or compile this code by-defalult we use comand in terminal
// javac filename ===> for compile
// java filename ===> for run
// Ex :- javac abcd.java / java abcd.java
package Aaa;
// -> this line required when our .java file is not in by-default folder

import Aaa.Aaa2.abcd2;

// -> at this way we can we can run code which is in folder into folder into folder
// -> we have also some include packages by-default

// import  

class abcd{
    public static void main (String args[]){
        System.out.println("Hello");

        abcd2 obj = new abcd2();
        obj.show();
        
    }
}