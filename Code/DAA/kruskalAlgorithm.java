import java.util.*;

class Edge implements Comparable<Edge> {
    int src, dest, weight;

    Edge(int src, int dest, int weight) {
        this.src = src;
        this.dest = dest;
        this.weight = weight;
    }

    public int compareTo(Edge e) {
        return this.weight - e.weight;
    }
}

public class kruskalAlgorithm {

    static int parent[];

    // Make set
    static void makeSet(int n) {
        parent = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
    }

    // Find with path compression
    static int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    // Union
    static void union(int a, int b) {
        parent[find(a)] = find(b);
    }

    public static void main(String[] args) {

        int V = 5;

        Edge edges[] = {
            new Edge(1, 5, 1),
            new Edge(3, 4, 2),
            new Edge(1, 2, 3),
            new Edge(2, 5, 4),
            new Edge(2, 3, 5),
            new Edge(5, 3, 6),
            new Edge(5, 4, 7)
        };

        Arrays.sort(edges);

        makeSet(V);

        int totalCost = 0;
        int edgeCount = 0;

        System.out.println("Edges in MST:");

        for (Edge e : edges) {
            if (find(e.src) != find(e.dest)) {
                union(e.src, e.dest);
                totalCost += e.weight;
                edgeCount++;

                System.out.println(e.src + " - " + e.dest + " : " + e.weight);
            }

            if (edgeCount == V - 1)
                break;
        }

        System.out.println("Total Cost: " + totalCost);
    }
}