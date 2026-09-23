/*THIS CODE IS MAKE A NEW FILE WHEN FILE IF NOT MAKE BEFORE RUN THE CODE. 
MAIN PURPOSE IS WRITTING*/
//WHEN YOU RUN THIS CODE IT WILL ERAZE ALL THE THINGS WHAT YOU WRITE THENAFTER 
//IT WRITE IN FILE
#include<stdio.h>

void main(){
    FILE *fp=NULL; 
    char ch[50],ch2;
    fp=fopen("abc.txt","w+");
    fputs("HELLO__WORLD",fp);

    rewind(fp);
//THIS FUNCTION IS USED TO MOVE THE CURSOR AT THE START OF THE FILE

    while(!feof(fp)){
        fgets(ch,30,fp);
        printf("%s",ch);
    }
    
    fclose(fp);
}