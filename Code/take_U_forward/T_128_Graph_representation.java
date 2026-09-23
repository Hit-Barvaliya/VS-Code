
import java.util.ArrayList;
import java.util.Scanner;

public class T_128_Graph_representation {

    
    // we have two ways to representation of graph :- 1) Matrix 2) List
    
    public static void method1(){
        Scanner sc = new Scanner(System.in);
    // har we make a metrix for the graph representation
        int n,m;

        // first take number of nodes
        n = sc.nextInt();
        // then take the number of edges
        m = sc.nextInt();

        // make a metrix for this :- 
        int metrix[][] = new int[n+1][n+1];

        for(int i=0;i<m;i++){
            int u,v;
            // hear the edge between u node nad v node
            u = sc.nextInt();
            v = sc.nextInt();
            // this is fro un-directed graph
            //  u --- v
            metrix[u][v] = 1;
            metrix[v][u] = 1;

            // this is fro directed graph
            //  u ---> v
            // metrix[u][v] = 1
        }

        /*  this is an example :- 
              0   1   2   3
            +---+---+---+---+
        0   | 0 | 1 | 0 | 0 |  (0 is connected to 1)
            +---+---+---+---+
        1   | 1 | 0 | 1 | 0 |  (1 is connected to 0 and 2)
            +---+---+---+---+
        2   | 0 | 1 | 0 | 1 |  (2 is connected to 1 and 3)
            +---+---+---+---+
        3   | 0 | 0 | 1 | 0 |  (3 is connected to 2)
         */

    }

    public static void method2(){
        Scanner sc = new Scanner(System.in);
    // hear we make a array of list or list of list

        int n ,e;
        n = sc.nextInt();   // number of nodes in graph
        e = sc.nextInt();   // number of edges in graph

    // hear we make a lit of list
        ArrayList<ArrayList<Integer>> ls = new ArrayList<>();

    // hear we add the Arraylist in the outer-ArrayList for n+1 times
        for(int i=0;i<=n;i++){
            ls.add(new ArrayList<Integer>());
        }

    // hear we take inout of all the edges
        for(int i=0;i<e;i++){
            int u,v;
            u = sc.nextInt();
            v = sc.nextInt();

            //  u --- v
            ls.get(u).add(v);
            ls.get(v).add(u);

            // this is for un-directed graph
            //  u ---> v
            // ls.get(u).add(v);
        }
        
        System.out.println("List of all the edges :- ");
        for(int i=0;i<ls.size();i++){
            System.out.print("List "+i +" :- ");
            for(int j=0;j<ls.get(i).size();j++){
                System.out.println(ls.get(i).get(j)+" ");
            }
            System.out.println();
        }

    }

    public static void weightedgraph(){
        /*  for the weighted we have also two method as same as above :- 
         * 1) in the metrix method we can store the weight instade of '1'
         * 2) in the list of list method method we need to store the pair of two integer instade of an integer {so we make a list of list of pair}
            |-> in the pair first integer is Node and second integer is weight.
         */
    }

    public static void main(String string[]){
        System.out.println("Hello");

        T_128_Graph_representation.method2();

    }
}
