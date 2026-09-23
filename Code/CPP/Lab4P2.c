#include<stdio.h>

int main(){

    char s1[100];

    printf("Enter the value of String :- ");
    scanf("%s",s1);



    char s2[100];
    int n2 = 0;

    for(int i=0;s1[i] != '\0';i++){
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U'){
           
            s2[n2] = s1[i];
            s1[i] = '*';
            n2++;
            
        }
    }

 

    // find size of main array :------------------

    int n1 = 0;
    for(int i=0;s1[i] != '\0';i++){
        n1++;
    }

    // ------------------------------

      for(int i=0;i<n2;i++){
        for(int j=1;j<n2;j++){
            if(s2[j-1] > s2[j]){
                char temp = s2[j-1];
                s2[j-1] = s2[j];
                s2[j] = temp;
            }
        }
    }

    printf("\nThe after sorting volves :- %d",n1);
    for(int i=0;i<n2;i++){
        printf("%c ",s2[i]);
    }

    // put value in main string :-

    printf("\nThe remove volves string is :- %s",s1);
    

    for(int i=0,j=0;i<n1 && j<n2;i++){
        
        if(s1[i] == '*'){
            s1[i] = s2[j];
            j++;
        }
    }

    printf("\nThe modified string is :- %s",s1);
    return 0;
}