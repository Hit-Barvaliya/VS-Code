import java.util.ArrayList;
import java.util.Arrays;
import java.util.PriorityQueue;

class Pair implements Comparable<Pair>{

    int node,distance;

    public Pair(int node,int distance){
        this.node = node;
        this.distance = distance;
    }

    public int compareTo(Pair other){
        return this.distance - other.distance;
    }

}

public class dijkstraAlgorithm {


    public static void dijkshtrademo(ArrayList<ArrayList<Pair>> ls,int v,int src){
        
        int dist[] = new int[v];
        boolean visited[] = new boolean[v];// y default this is false

        for(int i=0;i<dist.length;i++){
            dist[i] = Integer.MAX_VALUE;
        }
        dist[src] = 0;

        PriorityQueue<Pair> pq = new PriorityQueue<>();

        pq.add(new Pair(0,0));

        while(!pq.isEmpty()){

            Pair temp = pq.poll();

            int tempnode = temp.node;
            int tempdistance = temp.distance;

            
            if(visited[tempnode] == false){

                visited[tempnode] = true;
                
                for(int i=0;i<ls.get(tempnode).size();i++){
                    int new_node = ls.get(tempnode).get(i).node;
                    int new_distance = ls.get(tempnode).get(i).distance;

                    if(!visited[new_node] && (dist[new_node] > dist[tempnode]+new_distance)){
                        dist[new_node] = dist[tempnode] + new_distance;
                        pq.add(new Pair(new_node, new_distance));
                    }

                }
            }

        }

        for(int i=0;i<v;i++){
            System.out.println((char)(i+'A')+"=>"+dist[i]);
        }

    }


    public static void main(String string[]){

        System.out.println("Hello");

        ArrayList<ArrayList<Pair>> ls = new ArrayList<>();

        int v = 7;
        
        for(int i=0;i<v;i++){
            ls.add(new ArrayList<>());
        }


        // ls.get(0).add(new Pair(1, 1));
        // ls.get(0).add(new Pair(2, 4));

        // ls.get(1).add(new Pair(0, 1));
        // ls.get(1).add(new Pair(2, 2));
        // ls.get(1).add(new Pair(3, 6));

        // ls.get(2).add(new Pair(0, 4));
        // ls.get(2).add(new Pair(1, 2));
        // ls.get(2).add(new Pair(3, 3));

        // ls.get(3).add(new Pair(1, 6));
        // ls.get(3).add(new Pair(2, 3));

        // another test case

        // A (0)
        ls.get(0).add(new Pair(1, 2));
        ls.get(0).add(new Pair(2, 5));

        // B (1)
        ls.get(1).add(new Pair(0, 2));
        ls.get(1).add(new Pair(2, 1));
        ls.get(1).add(new Pair(3, 2));

        // C (2)
        ls.get(2).add(new Pair(0, 5));
        ls.get(2).add(new Pair(1, 1));
        ls.get(2).add(new Pair(3, 3));
        ls.get(2).add(new Pair(4, 1));

        // D (3)
        ls.get(3).add(new Pair(1, 2));
        ls.get(3).add(new Pair(2, 3));
        ls.get(3).add(new Pair(5, 1));

        // E (4)
        ls.get(4).add(new Pair(2, 1));
        ls.get(4).add(new Pair(5, 2));
        ls.get(4).add(new Pair(6, 7));

        // F (5)
        ls.get(5).add(new Pair(3, 1));
        ls.get(5).add(new Pair(4, 2));
        ls.get(5).add(new Pair(6, 3));

        // G (6)
        ls.get(6).add(new Pair(4, 7));
        ls.get(6).add(new Pair(5, 3));

        dijkshtrademo(ls,v,0);

        
        

    }
}
