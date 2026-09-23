/* THIS CODE GIVE AN ERROR WHEN FILE IS MADE BEFOR RUN THE CODE.*/
#include<stdio.h>
int main(){
    FILE *fp;
    char ch,str[50],ch2,str2[50];
    fp = fopen("abc.txt","r");
    //print character
    ch = fgetc(fp);
    printf("%c\n",ch);
    //print string
    while (!feof(fp))
    /*feof meaning is END OF FILE.
    if file is not end it reaturn 0 */     
    {
        ch2 = fgetc(fp);
        printf("%c",ch2);
    }
    //print string
    /* the reason of wrong answer is, fp is pointer which was increament every time
    if you want to see right answer comment all above lines*/
    // fgets(str,55,fp);
    fscanf(fp,"%s",str);
    //if you write n print (n-1) character
    printf("%s",str);
    
    while (!feof(fp)) 
    {
        fgets(str2,40,fp);
        printf("%s",str2);
    }

    fclose(fp);

    return 0;
}