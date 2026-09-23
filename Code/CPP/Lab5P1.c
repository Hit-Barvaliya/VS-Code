#include<stdio.h>


int main(){

    printf("Hello");

    char t1[20];

    printf("Enter the string 1 :- ");
    scanf("%s",t1);

    char t2[20];
    printf("Enter the string 2 :- ");
    scanf("%s",t2);

    // --------------------

    int s1L = 0;
    int s2L = 0;
    for(int i=0;t1[i] != '\0';i++){
        s1L++;
    }
    for(int i=0;t2[i] != '\0';i++){
        s2L++;
    }

    int arr[s1L+1][s2L+1];

    for(int i=0;i<s1L+1;i++){
        arr[i][0] = 0;
    }
    for(int j=0;j<s2L+1;j++){
        arr[0][j] = 0;
    }


    for(int i=1;i<s1L+1;i++){
        for(int j=1;j<s2L+1;j++){
            if(t1[i-1] == t2[j-1]){
                arr[i][j] = 1 + arr[i-1][j-1];
            } else {
                arr[i][j] = (arr[i-1][j] > arr[i][j-1]) ? arr[i-1][j] : arr[i][j-1];
            }
        }
    }


    printf("\n\nThe length of longest common subsequence is :- %d\n", arr[s1L][s2L]);


    // --------------------

    return 0;
}