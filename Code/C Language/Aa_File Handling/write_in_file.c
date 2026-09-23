/*THIS CODE IS MAKE A NEW FILE WHEN FILE IS NOT MAKE BEFORE RUN THE CODE. */
//IF YOU USE THIS MODE ALL PREVIOUS CONTANT WILL ERASE
#include<stdio.h>
void main(){
    FILE *fp=NULL; 
    char str[50] = {"this is my firts file.\n"};
    fp=fopen("abc2.txt","w");
    fputs(str,fp);
    char str2[50];
    //scanf("%[^\n]s",str2);
    gets(str2); 

    // for(int i=0;i<strlen(str2);i++){
    //     putc(str2[i],fp);
    // }


    fputs(str2,fp);
    // fprintf(fp,"%s",str2);

    fclose(fp);
}