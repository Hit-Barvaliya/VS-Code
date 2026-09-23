
import java.util.ArrayList;
import java.util.PriorityQueue;


class Pair implements Comparable<Pair> {

    int node;
    int distance;
    int parent;

    public Pair(int node,int distance,int parent){
        this.node = node;
        this.distance = distance;
        this.parent = parent;
    }

    public int compareTo(Pair other){
        return this.distance - other.distance;
    }

}


public class primsAlgorithm {

    public static void primeMST(ArrayList<ArrayList<Pair>> ls,int v){

        int visited[] = new int[v];
        // Pair MST[] = new Pair[v];
        ArrayList<Pair> MST = new ArrayList<>();
        int sum = 0;


        PriorityQueue<Pair> pq = new PriorityQueue<>();

        pq.add(new Pair(0,0,0));

        while(!pq.isEmpty()){

            Pair temp = pq.poll();

            int node = temp.node;
            int weight = temp.distance;
            int parent = temp.parent;

            if(visited[node] == 0){

                visited[node] = 1;
                sum += weight;

                MST.add(new Pair(node,weight,parent)); 

                for(int i=0;i<ls.get(node).size();i++){
                    int adjNode = ls.get(node).get(i).node;
                    int edWeight = ls.get(node).get(i).distance;
                    int adjparent = ls.get(node).get(i).parent;
                    if(visited[ls.get(node).get(i).node] == 0){
                        pq.add(new Pair(adjNode,edWeight,adjparent));
                    }
                }

            }
            
        }

        // Print MST using characters
        System.out.println("Edge \tWeight");
        for (int i = 1; i < MST.size(); i++) {
            if(MST.get(i) != null){
                System.out.println((char)(MST.get(i).parent + 'A') + "=>" + (char)(MST.get(i).node + 'A'));
            }
        }

        System.out.println("Total sum of all the edges of MST :- "+sum);

    }

    public static void main(String string[]){

        System.out.println("Hello");

        // run the code by the javac demo.java

        // hear we implement an adjency-list method to represent the graph

        ArrayList<ArrayList<Pair>> ls = new ArrayList<>();

        int v = 5;      // number of vertax

        for(int i=0;i<5;i++){
            ls.add(new ArrayList<Pair>());
        }

        // ls.get(0).add(new Pair(1, 2)); // A-B
        // ls.get(1).add(new Pair(0, 2));

        // ls.get(0).add(new Pair(3, 6)); // A-D
        // ls.get(3).add(new Pair(0, 6));

        // ls.get(1).add(new Pair(2, 3)); // B-C
        // ls.get(2).add(new Pair(1, 3));

        // ls.get(1).add(new Pair(3, 8)); // B-D
        // ls.get(3).add(new Pair(1, 8));

        // ls.get(1).add(new Pair(4, 5)); // B-E
        // ls.get(4).add(new Pair(1, 5));

        // ls.get(2).add(new Pair(4, 7)); // C-E
        // ls.get(4).add(new Pair(2, 7));



        ls.get(0).add(new Pair(1,1,0)); // A-B
ls.get(1).add(new Pair(0,1,1));

ls.get(0).add(new Pair(2,4,0)); // A-C
ls.get(2).add(new Pair(0,4,2));

ls.get(1).add(new Pair(2,2,1)); // B-C
ls.get(2).add(new Pair(1,2,2));

ls.get(1).add(new Pair(3,6,1)); // B-D
ls.get(3).add(new Pair(1,6,3));

ls.get(2).add(new Pair(3,3,2)); // C-D
ls.get(3).add(new Pair(2,3,3));

ls.get(2).add(new Pair(4,5,2)); // C-E
ls.get(4).add(new Pair(2,5,4));

ls.get(3).add(new Pair(4,7,3)); // D-E
ls.get(4).add(new Pair(3,7,4));



        for(int i=0;i<ls.size();i++){
            for(int j=0;j<ls.get(i).size();j++){
                System.out.print(ls.get(i).get(j).node+"=>");
            }
            System.out.println();
        }

        primeMST(ls, v);


    }
}