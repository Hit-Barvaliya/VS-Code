// #include<stdio.h>
// int main(){
//     FILE *fp;
//     fp = fopen("abc.txt","a+");
//     char ch;
//     int line = 1,space = 0,digit = 0,x;
//     while((ch = fgetc(fp) != EOF)){
//         //ch = fgetc(fp);
//         // x = (int)ch;
//         // if(x == 32)   space++;
//         // else if(x == 10)  line++;
//         // else    digit++;
//         printf("%c",ch);
//     }
//     // printf("digit : %d\n",digit);
//     // printf("space : %d\n",space);
//     // printf("line : %d",line);
//     fclose(fp);
//     return 0;
// }


#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("abc.txt","a+");
    char ch;
    int line = 1,character = 0;
    rewind(fp);
    while(ch = fgetc(fp) != EOF){
        
        if(ch == '\n')  line++;
        else character++;
    }
    printf("line is : %d\n",line);
    printf("character is : %d",character);
    fclose(fp);
    return 0;
}