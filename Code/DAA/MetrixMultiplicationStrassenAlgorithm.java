
import java.util.*;


public class MetrixMultiplicationStrassenAlgorithm{

    public static int[][] add(int m[][],int n[][]){

        int ans[][] = new int[m.length][m.length];

        for(int i=0;i<m.length;i++){
            for(int j=0;j<m.length;j++){
                ans[i][j] = m[i][j] + n[i][j];
            }
        }

        return ans;
    }
    
    
    public static int[][] sub(int m[][],int n[][]){

        int ans[][] = new int[m.length][m.length];

        for(int i=0;i<m.length;i++){
            for(int j=0;j<m.length;j++){
                ans[i][j] = m[i][j] - n[i][j];
            }
        }

        return ans;
    }

    public static int[][] kadanseMultiplication(int A[][], int B[][]){

        int n = A.length;
        int ans[][] = new int[n][n];

        if(n == 1){
            ans[0][0] = A[0][0] * B[0][0];
            return ans;
        }


        int size = n / 2;

        int a11[][] = new int[size][size];
        int a12[][] = new int[size][size];
        int a21[][] = new int[size][size];
        int a22[][] = new int[size][size];

        int b11[][] = new int[size][size];
        int b12[][] = new int[size][size];
        int b21[][] = new int[size][size];
        int b22[][] = new int[size][size];

        // this loop will assign the value to the new subpart of metrix

        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){

                a11[i][j] = A[i][j];
                a12[i][j] = A[i][j + size];
                a21[i][j] = A[i + size][j];
                a22[i][j] = A[i + size][j + size];

                b11[i][j] = B[i][j];
                b12[i][j] = B[i][j + size];
                b21[i][j] = B[i + size][j];
                b22[i][j] = B[i + size][j + size];

            }
        }



        
        int m1[][] = kadanseMultiplication(add(a11,a22),add(b11,b22));
        int m2[][] = kadanseMultiplication(add(a21,a22), b11);
        int m3[][] = kadanseMultiplication(a11, sub(b12,b22));
        int m4[][] = kadanseMultiplication(a22, sub(b21,b11));
        int m5[][] = kadanseMultiplication(add(a11,a12), b22);
        int m6[][] = kadanseMultiplication(sub(a21,a11), add(b11,b12));
        int m7[][] = kadanseMultiplication(sub(a12,a22), add(b21,b22));


        int c11[][] = add(sub(add(m1,m4),m5),m7);
        int c22[][] = add(add(sub(m1,m2),m3),m6);
        int c12[][] = add(m3,m5);
        int c21[][] = add(m2,m4);

        // this loop will marge all the subpart of metrix

        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                ans[i][j] = c11[i][j];
                ans[i][j + size] = c12[i][j];
                ans[i + size][j] = c21[i][j];
                ans[i+size][j+size] = c22[i][j];
            }
        }




        return ans;
    }


    public static void main(String string[]){

        System.out.println("Hello");
    
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the size of metrix :- ");
        int n = sc.nextInt();

        int A[][] = new int[n][n];
        int B[][] = new int[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                A[i][j] = (int)(Math.random()*10);
                B[i][j] = (int)(Math.random()*10);
            }
        }

        

        int ans[][] = kadanseMultiplication(A,B);
        
        System.out.println("This is first metrix :- ");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(A[i][j]+"=>");
            }
            System.out.println();
        }

        System.out.println("This is second metrix :- ");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(B[i][j]+"=>");
            }
            System.out.println();
        }
        
        
        System.out.println("\n\nanswer of this two metrix is :- ");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(ans[i][j]+"=>");
            }
            System.out.println();
        }


        /*
        M1 = (A11 + A22)(B11 + B22)
        M2 = (A21 + A22)B11
        M5 = (A11 + A12)B22
        M3 = A11(B12 - B22)
        M4 = A22(B21 - B11)
        M6 = (A21 - A11)(B11 + B12)
        M7 = (A12 - A22)(B21 + B22)
        C11 = M1 + M4 - M5 + M7
        C22 = M1 - M2 + M3 + M6
        C12 = M3 + M5
        C21 = M2 + M4
        */


    }
}






















// this is from Chat-GPT

// import java.util.Random;

// public class StrassenAlgorithm {

//     // Add matrices
//     static int[][] add(int[][] A, int[][] B) {
//         int n = A.length;
//         int[][] C = new int[n][n];
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 C[i][j] = A[i][j] + B[i][j];
//         return C;
//     }

//     // Subtract matrices
//     static int[][] subtract(int[][] A, int[][] B) {
//         int n = A.length;
//         int[][] C = new int[n][n];
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 C[i][j] = A[i][j] - B[i][j];
//         return C;
//     }

//     // Strassen multiplication
//     static int[][] multiply(int[][] A, int[][] B) {
//         int n = A.length;
//         int[][] C = new int[n][n];

//         if (n == 1) {
//             C[0][0] = A[0][0] * B[0][0];
//             return C;
//         }

//         int size = n / 2;

//         int[][] A11 = new int[size][size];
//         int[][] A12 = new int[size][size];
//         int[][] A21 = new int[size][size];
//         int[][] A22 = new int[size][size];

//         int[][] B11 = new int[size][size];
//         int[][] B12 = new int[size][size];
//         int[][] B21 = new int[size][size];
//         int[][] B22 = new int[size][size];

//         for (int i = 0; i < size; i++) {
//             for (int j = 0; j < size; j++) {
//                 A11[i][j] = A[i][j];
//                 A12[i][j] = A[i][j + size];
//                 A21[i][j] = A[i + size][j];
//                 A22[i][j] = A[i + size][j + size];

//                 B11[i][j] = B[i][j];
//                 B12[i][j] = B[i][j + size];
//                 B21[i][j] = B[i + size][j];
//                 B22[i][j] = B[i + size][j + size];
//             }
//         }

//         int[][] M1 = multiply(add(A11, A22), add(B11, B22));
//         int[][] M2 = multiply(add(A21, A22), B11);
//         int[][] M3 = multiply(A11, subtract(B12, B22));
//         int[][] M4 = multiply(A22, subtract(B21, B11));
//         int[][] M5 = multiply(add(A11, A12), B22);
//         int[][] M6 = multiply(subtract(A21, A11), add(B11, B12));
//         int[][] M7 = multiply(subtract(A12, A22), add(B21, B22));

//         int[][] C11 = add(subtract(add(M1, M4), M5), M7);
//         int[][] C12 = add(M3, M5);
//         int[][] C21 = add(M2, M4);
//         int[][] C22 = add(subtract(add(M1, M3), M2), M6);

//         for (int i = 0; i < size; i++) {
//             for (int j = 0; j < size; j++) {
//                 C[i][j] = C11[i][j];
//                 C[i][j + size] = C12[i][j];
//                 C[i + size][j] = C21[i][j];
//                 C[i + size][j + size] = C22[i][j];
//             }
//         }
//         return C;
//     }

//     // Generate random matrix
//     static int[][] generateMatrix(int n) {
//         Random r = new Random();
//         int[][] M = new int[n][n];
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 M[i][j] = r.nextInt(10);
//         return M;
//     }

//     // Main
//     public static void main(String[] args) {

//         int[] sizes = {4, 16, 64, 512, 1024};

//         for (int n : sizes) {
//             int[][] A = generateMatrix(n);
//             int[][] B = generateMatrix(n);

//             long start = System.nanoTime();
//             multiply(A, B);
//             long end = System.nanoTime();

//             double timeMs = (end - start) / 1_000_000.0;
//             System.out.println("Matrix Size: " + n + " x " + n +
//                                " | Time: " + timeMs + " ms");
//         }
//     }
// }
