//TO MOVE CURSOR ANYWHERE INTO THE FILE
// IT HAS THREE ARGUMENT
/*fseek(FILE POINTER,OFF SET,POSOTION)
            FLIE     LONG INT   INT */
// IN OFF SET IF WE MOVE FORWARD, VALUE IS IN + & IF MOVE BACKWORD, VALUE IS -
//---TYPE OF POSOTION----
//SEEK_SET SHOWS FIRST POSITION
//SEEK_CUR SHOWS CURRENT POSITION
//SEEK_END SHOES LAST POSOTION
#include<stdio.h>
int main (){
    
    FILE *fp;
    char ch,ch2[10];
    fp = fopen("abc.txt","r+");
    fseek(fp,3,SEEK_SET);
    fgets(ch2,5,fp);
    printf("%s ",ch2);

    fseek(fp,-2,SEEK_CUR);
    ch = fgetc(fp);
    printf("%c ",ch);

    fseek(fp,-2,SEEK_END);
    fputs("HELLO",fp);
    // return type is int
    //if this function will done successufly it returns 0

    fclose(fp);
    return 0;
}
//0123456789
//THIS IS MY
//OUTPUT:-
//SIM