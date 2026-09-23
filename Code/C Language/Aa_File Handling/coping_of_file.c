#include<stdio.h>
int main(){
    FILE *fp,*fp2;
    fp = fopen("abc.txt","r");
    fp2 = fopen("abc2.txt","w");

    char ch;
    while((ch = fgetc(fp)) != EOF){
        
        fputc(ch,fp2);
    }
    fclose(fp2);
    fclose(fp);
    return 0;
}