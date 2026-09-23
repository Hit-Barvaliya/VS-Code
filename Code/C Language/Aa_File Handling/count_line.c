#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("abc.txt","a+");
    char ch;
    int line = 1;
    rewind(fp);
    while(ch = fgetc(fp) != EOF){
        ch = fgetc(fp);
        if(ch == '\n')  line++;
    }
    printf("%d",line);
    fclose(fp);
    return 0;
}