import java.util.Arrays;
import java.util.Comparator;

public class interval_schedualing {

    static class interval{
        int start,finish;

        interval(int start,int finish){
            this.start = start;
            this.finish = finish;
    }

    }

    public static void selectIntervals(interval_schedualing.interval arr[]){

        Arrays.sort(arr, Comparator.comparingInt(a -> a.finish));

        interval selected = arr[0];
        System.out.println("Selected Interval is :- ("+selected.start+","+selected.finish+")");

        for(int i=1;i<arr.length;i++){

            if(selected.finish <= arr[i].start) {
                selected = arr[i];
                System.out.println("Selected Interval is :- ("+selected.start+","+selected.finish+")");
            }

        }

    }

    public static void main(String string[]){


        System.out.println("Hello");

        interval_schedualing i = new interval_schedualing();


        interval_schedualing.interval arr[] = {
            new interval(1, 3),
            new interval(2, 5),
            new interval(4, 7),
            new interval(6, 9),
            new interval(8, 10),
            new interval(9, 11)
        };

        selectIntervals(arr);

        /* 
        Time complexity is T(n) = O(nlogn) + O(n)
         -> nlogn is for sorting the intervals
         -> n is for single scan to select the intervals

        Space complexity is O(1)
        */

        
    }
}
