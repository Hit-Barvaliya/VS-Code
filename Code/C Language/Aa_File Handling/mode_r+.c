/* THIS CODE GIVE AN ERROR WHEN FILE IS NOT MADE BEFOR RUN THE CODE.*/
//  HERE ALL ALPHABETS ARE REPLACE WITH OLD  ALPHABATE
// MAIN PURPOSE IS READING
#include<stdio.h>
int main(){
    FILE *fp;
    char ch,str[50],ch2,str2[50];
    fp = fopen("abc.txt","r+");
    fputs("HELLO",fp);
    fputc('z',fp);
    fclose(fp);
    return 0;
}





//BOTH ARE DIFFERENT CODE






// /* THIS CODE GIVE AN ERROR WHEN FILE IS MADE BEFOR RUN THE CODE.*/
// //  HERE ALL ALPHABETS ARE REPLACE WITH OLD  ALPHABATE
// // MAIN PURPOSE IS READING
// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char ch,str[50],ch2,str2[50];
//     fp = fopen("abc.txt","r+");
//     while (!feof(fp))
//     {
//         fgets(str,5,fp);
//         printf("%s",str);
//     }
//     fputs("jenny",fp);
//     fclose(fp);
//     return 0;
// }