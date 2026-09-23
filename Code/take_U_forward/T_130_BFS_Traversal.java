
// this is BFS(Breath First Traversal) for graph

/*
 take ans eaxmple :- 

9
9
1 2
1 6
2 3
2 4
6 7
6 9
4 5
7 8
5 8
This is an answer :-
1=>2=>6=>1=>3=>4=>7=>9=>5=>8=>
 */

import java.util.Scanner;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

// class Node{
//     int data;
//     Node right,left;
//     Node (int data){
//         this.data = data;
//         right = left = null;
//     }
// }

// class Tree{
//     Node root = null;
// }



public class T_130_BFS_Traversal{
    public static void main(String string[]){
        
        Scanner sc = new Scanner(System.in);
        
        int n,e;        

        n = sc.nextInt();
        e = sc.nextInt();

        ArrayList<ArrayList<Integer>> ls = new ArrayList<>();

        for(int i=0;i<=n;i++){
            ls.add(new ArrayList<>());
        }

        for(int i=0;i<e;i++){
            int u = sc.nextInt();
            int v = sc.nextInt();

            ls.get(u).add(v);
            ls.get(v).add(u);

        }

        System.out.println("List of all array lise :- ");
        for(int i=0;i<ls.size();i++){
            System.out.print("List "+i+" :- ");
            for(int j=0;j<ls.get(i).size();j++){
                System.out.print(ls.get(i).get(j)+" , ");
            }
            System.out.println();
        }

        // this is for BFS traversal

        Queue<Integer> qu = new LinkedList<>();
        boolean[] check = new boolean[n+1];
        ArrayList<Integer> ans = new ArrayList<>();

/*
    * Time-complexity :- O(n)+O(2E)
    *      |-> when any node will enter into the loop that loop will ecexute node's degree time
    *              and the total degree of un-directed graph is 2*Edges
    * Space-complexity :- O(3n)
    *      |-> one O(n) is used to store an answer so it not may be consider
*/

        // first we enter the first element in the queue
        qu.add(1);

        while(!qu.isEmpty()){

            // int size = qu.size();

            // for(int i=0;i<size;i++){
                for(int j=0;j<ls.get(qu.peek()).size();j++){

                    // qu.add(ls.get(qu.peek()).get(j));
                    int num = ls.get(qu.peek()).get(j);
                    if(check[num] == false){
                        qu.add(num);
                        check[num] = true;
                    }

                }
                ans.add(qu.poll());
            // }

        }

        System.out.println("This is an answer :- ");

        for(Integer i : ans){
            System.out.print(i+"=>");
        }


    }
}