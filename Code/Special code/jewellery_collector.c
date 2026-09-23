#include<stdio.h>
// #include<time.h>
#include<stdlib.h>
#include<conio.h>
/*
    A for right
    S for left
    W for up
    Z for down
    Q for quite the game

*/
int x=0,y=0,p=0,count=0,n,gameover=0,number=0;
int positionX[4],positionY[4];
char ch;
void update_posotion(){
    if(ch=='a'){
        if(!(y==0))     y--,count++;;
    }
    if(ch=='s'){
        if(!(y==50))     y++,count++;;
    }
    if(ch=='w'){
        if(!(x==0))     x--,count++;;
    }
    if(ch=='z'){
        if(!(x==15))     x++,count++;;
    }
}
void draw_border(){
    system("cls");
    for(int i=-1;i<=16;i++){
        for(int j=-1;j<=51;j++){
            if(i==-1 || j==-1 || i==16 || j==51)    printf("#");
			else{
				if(i==x && j==y){

                    printf("P");

                    if(positionX[0]==x && positionY[0]==y)  positionX[0] = -2 , positionY[0] = -2 , number++;
                    else if(positionX[1]==x && positionY[1]==y) positionX[1] = -2 , positionY[1] = -2 , number++;
                    else if(positionX[2]==x && positionY[2]==y) positionX[2] = -2 , positionY[2] = -2 , number++;
                    else if(positionX[3]==x && positionY[3]==y) positionX[3] = -2 , positionY[3] = -2 , number++;

                    if(positionX[0]==-2 && positionY[0]==-2 && positionX[1]==-2 && positionY[1]==-2 && positionX[2]==-2 && positionY[2]==-2 && positionX[3]==-2 && positionY[3]==-2){
                        gameover=1;
                    }

                }
                else {
                    if(positionX[0]==i && positionY[0]==j)  printf("a");
                    else if(positionX[1]==i && positionY[1]==j)  printf("b");
                    else if(positionX[2]==i && positionY[2]==j)  printf("c");
                    else if(positionX[3]==i && positionY[3]==j)  printf("d");
                    else    printf(" ");
                }
			}
        }
        printf("\n");
    }

    if(ch=='a')     system("color 0A");
    else if(ch=='s')     system("color 0B");
    else if(ch=='w')     system("color 0E");
    else if(ch=='z')     system("color 0D");
    else if(ch=='q')     system("color 0C");

}
int main(){
    
    srand(time(0));
    for(int i=0;i<4;i++){
        n = rand() % 50;
        positionY[i] = n;
        n = rand() % 15;
        positionX[i] = n;
    }

    draw_border();
    while(1){
        if (gameover==1 || ch == 'q')   break;
        else if(gameover==0){
            ch = getch();
            update_posotion();
            draw_border();
        }
    }
    if(number!=4){
        printf("\nOh No! You Quit!!\n");
		printf("\nYou Collected %d Jwels!\n",gameover); // gameOver will give the number of jwel collected.
		printf("\nAfter %d Moves You Quit!\n",count); // gives number of moves so for.
		printf("\n[][][][] Game Over [][][][]\n");

    }else{
        printf("\n[][][][] Well Done [][][][]\n");
		printf("\nYou Collected All The Jwels!\n");
		printf("\nIt Took You %d Moves!\n",count);
		printf("\n[][][][] Game Over [][][][]\n");

    }
    return 0;
}


/*
// this code was updated
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
 *     enter 'a' for left arrow
 *      enter 's' for right arrow
 *      enter 'w' for up arrow
 *      enter 'z' for down arrow
 *      enter 'q' for quit to the game
 
int x=0,y=0,i=0;
char ch;
int positionX[4] = {0};
int positionY[4] = {0};
int numcount=0,gameover=0,gameout=0;
int n;

void change_location(){
    if(ch=='a' && x != 0){
        (numcount)++;
        (x)--;
    }
    if(ch=='s' && x != 49){
        (numcount)++;
        (x)++;
    }
    if(ch=='w' && y != 0){
        (numcount)++;
        (y)--;
    }
    if(ch=='z' && y != 9){
        (numcount)++;
        (y)++;
    }
    if(ch=='q'){
        gameout = 1;
    }
    
    
}

void draw_border(){
    int i,j,k;
    for(int i=-1;i<=10;i++){
        for(int j=-1;j<=50;j++){
            if(i==-1 || j==-1 || i==10 || j==50){
                printf("#");
            }
            else {
                if(i==y && j==x){
                    printf("P");
                    for(k=0;k<4;k++){
                        if(positionX[k]==x && positionY[k]==y){
                            positionX[k] = -1;
                            positionY[k] = -1;
                            gameover++;
                        }
                    }
                }
                else{
                    if(positionX[0]==j && positionY[0]==i){
                        printf("a");
                    }
                    else if(positionX[1]==j && positionY[1]==i){
                        printf("b");
                    }
                    else if(positionX[2]==j && positionY[2]==i){
                        printf("c");
                    }
                    else if(positionX[3]==j && positionY[3]==i){
                        printf("d");
                    }
                    else {
                        printf(" ");
                    }
                    
                }
            }
        }
        printf("\n");
    }

}


int main(){

    srand(time(0));

    while(i<4){
        n = rand() % 50;
        positionX[i] = n;
        n = rand() % 10;
        positionY[i] = n;
        i++;
    }

    draw_border();

    while(1){
        if(kbhit()){
// hear kbhit() function is used to check any key was pressed or not
            ch = getch();
            system("cls");
            change_location();
            if(gameout == 0){
                draw_border();
                if(gameover==4){
                    system("cls");
					printf("\n[][][][] Well Done [][][][]\n");
					printf("\nYou Collected All The Jwels!\n");
					printf("\nIt Took You %d Moves!\n",numcount);
					printf("\n[][][][] Game Over [][][][]\n");
					break;
                }
            }
            else{
                system("cls");
				printf("\nOh No! You Quit!!\n");
				printf("\nYou Collected %d Jwels!\n",gameover); // gameOver will give the number of jwel collected.
				printf("\nAfter %d Moves You Quit!\n",numcount); // gives number of moves so for.
				printf("\n[][][][] Game Over [][][][]\n");
				break;
            }
        }
    }
    getch();
    return 0;
}
*/