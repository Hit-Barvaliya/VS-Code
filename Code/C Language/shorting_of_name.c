#include <stdio.h>
#include<string.h>
int main() 
{
    int n,a=0;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    char arr[n][20];
    for(int i=0;i<n;i++){
        printf("Enter name %d : ",i+1);
        scanf("%s",arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            read: if(arr[i][a]==arr[j][a]){
                a++;
                goto read;
            }else if (arr[i][a]>arr[j][a]){
                char temp[20];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
                a=0;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;arr[i][j] != '\0';j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n24DCE010");
    return 0;
}