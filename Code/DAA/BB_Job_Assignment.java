import java.util.*;
// this job-assignment code which is required. 
// this is not give assigned with optimal approch because hear we for all the possibilities

public class BB_Job_Assignment {

    static int minimalCost = Integer.MAX_VALUE;

    // hear n show the number of level
    public static void solve_problem(int arr[][], boolean assigned[],int level,int current_cost){

        if(level == arr.length){
            minimalCost = Integer.min(minimalCost, current_cost);
            
            return;
        }

        for(int i=0;i<arr.length;i++){
            if(assigned[i] == false){
                assigned[i] = true;
                solve_problem(arr, assigned, level+1, current_cost+arr[i][level]);
                assigned[i] = false;
            }
        }

    }

    public static void main(String string[]){

        System.out.println("Hello");

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of Jo/Worker :- ");
        int n = sc.nextInt();   // hear a number of worker and number of job are same

        int arr[][] = new int[n][n];

        System.out.println("Enter metrxi of Job/Workers :- ");

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }

        boolean assigned[] = new boolean[n];

        solve_problem(arr,assigned,0,0);

        System.out.println("ANSWER is :- "+minimalCost);

    }
}



/* 

import java.util.*;
// this job-assignment code which is required. 
// this is not give assigned with optimal approch because hear we for all the possibilities

public class demo {
    static int n;
    static int finalRes = Integer.MAX_VALUE;

    static void solve(int[][] cost, boolean[] assigned, int job, int currentCost) {
        if (job == n) {
            finalRes = Math.min(finalRes, currentCost);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (!assigned[i]) {
                assigned[i] = true;
                solve(cost, assigned, job + 1, currentCost + cost[i][job]);
                assigned[i] = false; // backtrack
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of jobs/workers: ");
        n = sc.nextInt();
        int[][] cost = new int[n][n];
        System.out.println("Enter cost matrix:");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cost[i][j] = sc.nextInt();

        boolean[] assigned = new boolean[n];
        solve(cost, assigned, 0, 0);
        System.out.println("Minimum cost of assignment: " + finalRes);
    }
}

*/