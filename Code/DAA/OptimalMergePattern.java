import java.util.*;

public class OptimalMergePattern {

    public static int optimalMerge(int files[]) {
        
        /*
        ->  What is the goal?

            -> Merge all files into one final file
                |-> But do it in such an order that
                |-> Total merge cost is minimum
        */


        // Min heap (priority queue)
        PriorityQueue<Integer> pq = new PriorityQueue<>();

        // Insert all file sizes into heap
        for (int f : files) {
            pq.add(f);
        }

        int totalCost = 0;

        // Repeat until only one file remains
        while (pq.size() > 1) {

            // Extract two smallest files
            int a = pq.poll();
            int b = pq.poll();

            int mergeCost = a + b;

            totalCost += mergeCost;

            // Insert merged file back
            pq.add(mergeCost);
        }

        return totalCost;
    }

    public static void main(String[] args) {

        int files[] = {5, 10, 20, 30};

        int result = optimalMerge(files);

        System.out.println("Optimal Merge Cost = " + result);
    }
}
