
import java.util.*;

// DFS Traversal is done with the help of recursive approch

// this is for graph

/*
 input is show in give photo
8
8
1 2
1 3
2 5
2 6
3 4
3 7
7 8
8 4
 */

class DFS{
    Scanner sc = new Scanner(System.in);

    int n,e;    // number of node and edges
    ArrayList<ArrayList<Integer>> ls = new ArrayList<>();

    public DFS (int n,int e){
        this.n = n;
        this.e = e;        
        
        for(int i=0;i<=n;i++){
            ls.add(new ArrayList<>());
        }

         // start to take an input of edges
        //  System.out.println("Enter all the edges :- ");
        for(int i=0;i<e;i++){
            // System.out.print("edges No "+i+" :- ");
            int u = sc.nextInt();
            int v = sc.nextInt();
            
            ls.get(u).add(v);
            ls.get(v).add(u);
        }

    }

    // public void takeInput(){}

    public void showLS(){
        // show the adjency list
        System.out.println("List of all array lise :- ");
        for(int i=0;i<ls.size();i++){
            System.out.print("List "+i+" :- ");
            for(int j=0;j<ls.get(i).size();j++){
                System.out.print(ls.get(i).get(j)+" , ");
            }
            System.out.println();
        }
    }

    public void DFS_TraversalNEW(int num){

    ArrayList<Integer> ans = new ArrayList<>();
    boolean[] visited = new boolean[n+1];

        // ans.add(num);
        // visited[num] = true;

        start_DFS(num,ans,visited);

        System.out.println("ans :- ");
        for(int i : ans){
            System.out.print(i+"=>");
        }

    }

    public void start_DFS(int num,ArrayList<Integer> ans,boolean[] visited){
              
        ans.add(num);
        visited[num] = true;

        for(int i : ls.get(num)){
            if(!visited[i]){      // if node is not visited then condition will hit
                start_DFS(i, ans, visited);
            }
        }
    }

}

public class T_131_DFS_Traversal {

    /*
     * Time-complexity :- O(n) + O(2*E)
     * Space-complexity :- O(n) + O(n) O(n)
     *          |-> last O(n) is for the worst case of recursion 
     *                  in the worst case we at one time we have total 'n' number of nodes
     */

    public static void main(String string[]){
        System.out.println("Hello");

        Scanner sc = new Scanner(System.in);

        int n,e;

        // System.out.println("Enter the number of nodes :- ");
        n = sc.nextInt();
        // System.out.println("Enter the number of edges :- ");
        e = sc.nextInt();

        DFS obj = new DFS(n,e);

        // obj.takeInput();
        obj.showLS();
        // we start to call the with the starting node
        obj.DFS_TraversalNEW(1);
        

    }    
}
