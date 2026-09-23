#include<stdio.h>

int g;

int findAns(int gas[], int cost[], int current,int start,int current_Fuel,int count){

    if(count == g && current_Fuel >= 0 && count != 0)
        return start;
    

    if(current_Fuel < 0)
        return -1;
    
    int index = (current+1)%g;
    count++;
    findAns(gas,cost,index,start,current_Fuel + gas[index] - cost[index],count);
    count--;

    // if(current == 0)
    //     index = g-1;
    // else 
    //     index = current - 1;
    
    // count++;
    // findAns(gas,cost,index,start,current_Fuel + gas[index] - cost[index],count);
    // count--;
    
}


int main(){

    /*
| #  | `gas`         | `cost`        | Expected Output |
| -- | ------------- | ------------- | --------------: |
| 1  | `[1,2,3,4,5]` | `[3,4,5,1,2]` |             `3` |

| 2  | `[2,3,4]`     | `[3,4,3]`     |            `-1` |---------------

| 3  | `[5]`         | `[4]`         |             `0` |
| 4  | `[3]`         | `[5]`         |            `-1` |
| 5  | `[2,2,2]`     | `[2,2,2]`     |             `0` |
| 6  | `[1,2,3]`     | `[2,1,2]`     |             `1` |
| 7  | `[3,1,1]`     | `[1,2,2]`     |             `0` |
| 8  | `[1,2,3,4]`   | `[2,2,2,4]`   |             `1` |
| 9  | `[4,1,2,3]`   | `[2,2,2,4]`   |             `0` |
| 10 | `[2,5,1,3]`   | `[3,2,2,4]`   |             `1` |



| #  | Gas              | Cost            | Expected |
| -- | ---------------- | --------------- | -------: |
| 1  | `[6,1,4,3,5]`    | `[4,3,2,5,2]`   |      `4` |
| 2  | `[3,3,4]`        | `[4,3,3]`       |      `1` |
| 3  | `[5,1,2,3,4]`    | `[4,4,1,5,1]`   |      `4` |
| 4  | `[2,8,1,2,6]`    | `[3,4,3,5,4]`   |      `1` |
| 5  | `[1,2,3,4,5,6]`  | `[3,4,5,1,2,3]` |      `3` |
| 6  | `[10,1,1,1,1]`   | `[2,3,2,3,2]`   |      `0` |
| 7  | `[1,1,10,1,1,1]` | `[2,2,3,2,2,2]` |      `2` |
| 8  | `[4,6,7,4,4]`    | `[6,5,3,5,3]`   |      `1` |
| 9  | `[2,2,2,10,2,2]` | `[3,3,3,4,3,3]` |      `3` |
| 10 | `[5,1,1,1,1,10]` | `[6,2,2,2,2,5]` |      `1` |



    */

    printf("Enter the size of gas array :- ");
    scanf("%d",&g);
    int gas[g];
    for(int i=0;i<g;i++){
        int temp;
        printf("Enter the value of gas array :- ");
        scanf("%d",&temp);
        gas[i] = temp;
    }

    int c = g;
    printf("\n\nThe size of cost array = %d\n", c);
    int cost[c];
    for(int i=0;i<c;i++){
        int temp;
        printf("Enter the value of cost array :- ");
        scanf("%d",&temp);
        cost[i] = temp;
    }

    int ans = -1;

    for( int i=0;i<c;i++){
        if(gas[i] - cost[i] >= 0){
            ans = findAns(gas,cost,i,i,gas[i]-cost[i],0);
            printf(" \t\tANS :_ %d\t\t",ans);
        }
        if(ans != -1){
            break;
        }
    }

    printf("\n\nHear we start statin from the 0 index ");
    printf("\n\nwe start from This station :- %d",ans);



    return 0;
}