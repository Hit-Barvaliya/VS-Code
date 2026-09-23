
import java.util.ArrayList;
import java.util.Scanner;

public class exam {

    public static void get_answer_of_LCS(int p[][],String s1,String s2){

        ArrayList ans = new ArrayList<>();

        for(int i=s1.length();i>=1;){
            for(int j=s2.length();j>=1;){

                if(s1.charAt(i-1) == s2.charAt(j-1)){
                    ans.add(s1.charAt(i-1));
                    i--;
                    j--;
                } else {
                    if(s1.charAt(i-1) < s2.charAt(j-1)){
                        j--;
                    } else {
                        i--;
                    }
                }

            }
        }

        System.out.println("LCS from give string is :- ");



        for(int i=ans.size()-1;i>=0;i--){
            System.out.print(ans.get(i)+"=>");
        }

    }

    public static int find_LCS_Length(String s1,String s2){

        int p[][] = new int[s1.length()+1][s2.length()+1];

        for(int i=0;i<=s1.length();i++){
            p[i][0] = 0;
        }

        for(int j=0;j<=s2.length();j++){
            p[0][j] = 0;
        }

        for(int i=1;i<=s1.length();i++){
            for(int j=1;j<=s2.length();j++){
                if(s1.charAt(i-1) == s2.charAt(j-1)){
                    p[i][j] = p[i-1][j-1]+1;
                } else {
                    p[i][j] = Integer.max(p[i-1][j], p[i][j-1]);
                }
            }
        }
        
        // this is reconstruction of LCS
        get_answer_of_LCS(p,s1,s2);
        
        return p[s1.length()][s2.length()];
    }
    
    

    public static void main(String string[]){
        
        System.out.println("Hello");
        
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter first string:- ");
        String s1 = sc.nextLine();
        System.out.println("Enter second string:- ");
        String s2 = sc.nextLine();
        
        
        int ans = find_LCS_Length(s1,s2);
        
        System.out.println("\nLength os LCS is :-" + ans);
        
        
        
    }
}
