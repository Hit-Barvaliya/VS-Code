public class DP_metrix_multiplication {

    // this function is to compute the table 
    public static int metrixMultiplicationTable(int p[],int n,int s[][]){

        int m[][] = new int[n][n];
        
        for(int i=0;i<n;i++){
            m[i][i] = 0;
        }

        for(int len=0;len<n-1;len++){
            for(int i=1;i<n;i++){
                int j = i+len;
                if(i<j && j<n){
                    System.out.print("("+i+","+j+")");

                    m[i][j] = Integer.MAX_VALUE;
                    for(int k=i;k<j;k++){
                        int cost = m[i][k] + m[k+1][j] + (p[i-1]*p[k]*p[j]);
                        if(cost < m[i][j]){
                            m[i][j] = cost;
                            s[i][j] = k;
                        }
                    }
                }
            }
            System.out.println();
        }
        
        
        return m[1][n-1];
    } 
   
    // this will show the order of multiplication of metrix
    public static void printOrderOfMetrix(int s[][],int i,int j){

        if (i == j) {
            System.out.print("A" + i);
            return;
        }

        System.out.print("(");

        printOrderOfMetrix(s, i, s[i][j]);

        printOrderOfMetrix(s, s[i][j] + 1, j);

        System.out.print(")");

    }
    
    public static void main(String string[]){
        
        System.out.println("Hello");
        
        int p[] = {2,5,3,4,2,6};
        
        int n = p.length;

        int s[][] = new int[n][n];
        
        
        int mincost = metrixMultiplicationTable(p,n,s);
        
        System.out.println("Min cost is :- "+mincost);
        
        // this will show the order of metrix multiplication
        System.out.print("Optimal Parenthesization: ");
        printOrderOfMetrix(s, 1, n - 1);
        
    }    
}

