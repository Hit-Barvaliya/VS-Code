
import java.util.Scanner;

public class String_Matching_KMP {

    public static void computeLPS(int pi[],String pattern){

        pi[0] = 0;
        int len = 0;    // last longest prefix & suffix

        for(int i=1;i<pattern.length();){

            while(i<pattern.length()){

                if(pattern.charAt(i) == pattern.charAt(len)){
                    len++;
                    pi[i] = len;
                    i++;
                } else {
                    if(len != 0){
                        len = pi[len-1];    // fallback
                    } else {
                        pi[i] = 0;
                        i++;
                    }
                }

            }

        }


        
        
    }
    
    public static void KMPSearch(String text,String pattern){
        
        int n = text.length();
        int m = pattern.length();
        
        int pi[] = new int[m];
        
        computeLPS(pi,pattern);
        
        // for(int i=0;i<pi.length;i++){
        //     System.out.print(pi[i]);
        // }

        int i=0;    // pointer for text
        int j=0;    // pointer for patter

        while(i<n){ // we move i poiter from start to end in patter string

            if(text.charAt(i) == pattern.charAt(j)){
                i++;
                j++;
            } 

            if(j == m){ // hear we find a whole patter in text
                System.out.println("Your patter start from :- "+(i-j));
                j = pi[j-1];    // we ca write j = pi[m-1] becase both value are same
            } 
             else if(i<n && text.charAt(i) != pattern.charAt(j))
                {
                    if(j != 0){
                        j = pi[j-1];
                    } else {
                        i++;
                    }
                }

        }

        /* 

        -> this is same as ppt psudo code

        while (i < n) {

        while (j > 0 && text.charAt(i) != pattern.charAt(j)) {
            j = pi[j - 1]; // multiple fallback
        }

        if (text.charAt(i) == pattern.charAt(j)) {
            j++;
        }

        if (j == m) {
            System.out.println("Pattern found at index " + (i - j + 1));
            j = pi[j - 1];
        }

        i++;
    }
        */





    }

    public static void main(String string[]){

        System.out.println("Hello");

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter you Text :- ");
        String text = sc.nextLine();
        // String text = "ABABDABACDABABCABAB";

        System.out.print("Enter you Pattern :- ");
        String pattern = sc.nextLine();
        // String pattern = "ABABCABAB";


        /* 
        | Feature    | Naive     | KMP        |
        | ---------- | --------- | ---------- |
        | Worst Time | ( O(nm) ) | ( O(n+m) ) |
        | Best Time  | ( O(n) )  | ( O(n+m) ) |


        ==> this table is for boyer-moore algorithm
| Case | Condition             | Shift             |
| ---- | --------------------- | ----------------- |
| 1    | Suffix inside pattern | Align with it     |
| 2    | Matches prefix        | Align with prefix |
| 3    | No match anywhere     | Shift by m        |
| 4    | Empty suffix          | Shift by 1        |


        */


        KMPSearch(text,pattern);
        

    }
}
