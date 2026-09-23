//return type of this function is long int
//THIS FUNCTION GIVE US THE POSITION OF THE CURSOR

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    char str[50];
    fp = fopen("abc.txt","r+");
    
    //fseek(fp,0,SEEK_END);
    printf("%d",ftell(fp));
    fscanf(fp,"%s",str);
    printf("\n%s\n",str);
    printf("%d",ftell(fp));

    fclose(fp);
    return 0;
}