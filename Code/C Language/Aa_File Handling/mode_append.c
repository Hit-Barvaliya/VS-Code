/*IF YOU USE THIS MODE CURSER WILL RICH THE LAST LATTER OF THE FILE*/
/*THIS CODE IS MAKE A NEW FILE WHEN FILE IS NOT MAKE BEFORE RUN THE CODE. */

#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("abc.txt","a");
    char str[20];
    printf("enter any words which add in file : ");
    scanf("%[^\n]s",str);
    fprintf(fp,"\n%s",str);
    fprintf(fp,"HELLO");
    // we can also use fputs or fputc
    return 0;
}