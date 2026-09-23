import java.util.*;

public class Aa_MColoring {

    static boolean isSafe(int node, int color[], boolean graph[][], int c, int n) {
        for (int i = 0; i < n; i++) {
            if (graph[node][i] && color[i] == c) return false;
        }
        return true;
    }

    static boolean solve(boolean graph[][], int m, int color[], int node, int n) {
        if (node == n) return true;

        for (int c = 1; c <= m; c++) {
            if (isSafe(node, color, graph, c, n)) {
                color[node] = c;
                if (solve(graph, m, color, node + 1, n)) return true;
                color[node] = 0; // backtrack
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of nodes: ");
        int n = sc.nextInt();
        boolean[][] graph = new boolean[n][n];

        System.out.println("Enter adjacency matrix (0/1):");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                graph[i][j] = sc.nextInt() == 1;

        System.out.print("Enter number of colors: ");
        int m = sc.nextInt();
        int[] color = new int[n];

        if (solve(graph, m, color, 0, n)) {
            System.out.println("Solution exists. Coloring:");
            for (int i = 0; i < n; i++)
                System.out.println("Node " + i + " -> Color " + color[i]);
        } else {
            System.out.println("No solution exists with " + m + " colors.");
        }
    }
}