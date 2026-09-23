/*IF YOU WANT TO READ, POINTER MOVE TO START OF THE FILE AND IF YOU WANT TO WRITE,
POINTER MOVE TO END OF THE FILE*/
//IF FILE IS NOT PRESENT, IT WILL CREAT A NEW FILE
//THIS MODE IS USE FOR READ AND APPEND
#include<stdio.h>
int main (){
    FILE *fp;
    char ch;
    fp = fopen("abc.txt","a+");
    //fputs("KHATRI",fp);
    rewind(fp);
    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
/*the different between write and append
->in write mode 
*/