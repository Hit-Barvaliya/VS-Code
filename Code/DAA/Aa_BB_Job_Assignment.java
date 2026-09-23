import java.util.*;

class Node {
    int level;          // current job index
    int cost;           // f(i) = actual cost
    int bound;          // c^(i) = f(i) + g(i)
    boolean[] assigned;

    Node(int level, int cost, boolean[] assigned) {
        this.level = level;
        this.cost = cost;
        this.assigned = assigned.clone();
    }
}

public class Aa_BB_Job_Assignment {

    static int n;

    // 🔥 Calculate LOWER BOUND using ROW MINIMUM (g(i))
    static int calculateBound(Node node, int[][] costMatrix) {
        int bound = node.cost;

        boolean[] assigned = node.assigned.clone();

        // Remaining jobs
        for (int j = node.level + 1; j < n; j++) {

            int minCost = Integer.MAX_VALUE;

            for (int i = 0; i < n; i++) {
                if (!assigned[i] && costMatrix[i][j] < minCost) {
                    minCost = costMatrix[i][j];
                }
            }

            bound += minCost; // g(i)
        }

        return bound;
    }

    public static void solve(int[][] costMatrix) {

        PriorityQueue<Node> pq =
                new PriorityQueue<>(Comparator.comparingInt(a -> a.bound));

        // 🔥 Initial Upper Bound (can be large)
        int UB = Integer.MAX_VALUE;

        // Root node
        boolean[] assigned = new boolean[n];
        Node root = new Node(-1, 0, assigned);
        root.bound = calculateBound(root, costMatrix);

        pq.add(root);

        while (!pq.isEmpty()) {

            Node current = pq.poll();

            // 🔴 Prune condition (PDF logic)
            if (current.bound >= UB)
                continue;

            int level = current.level + 1;

            // ✅ If solution found
            if (level == n) {
                UB = Math.min(UB, current.cost);
                continue;
            }

            // 🔥 Branching (same block you asked about)
            for (int i = 0; i < n; i++) {

                if (!current.assigned[i]) {

                    Node child = new Node(
                            level,
                            current.cost + costMatrix[i][level],
                            current.assigned
                    );

                    child.assigned[i] = true;

                    // 🔥 Calculate bound = f(i) + g(i)
                    child.bound = calculateBound(child, costMatrix);

                    // 🔴 Pruning condition (IMPORTANT)
                    if (child.bound < UB) {
                        pq.add(child);
                    }
                }
            }
        }

        System.out.println("Optimal Cost (UB): " + UB);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of jobs/workers: ");
        n = sc.nextInt();

        int[][] costMatrix = new int[n][n];

        System.out.println("Enter cost matrix:");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                costMatrix[i][j] = sc.nextInt();

        solve(costMatrix);
    }
}