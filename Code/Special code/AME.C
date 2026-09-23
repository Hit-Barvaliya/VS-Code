// this code was updated
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
/**     enter 'a' for left arrow
 *      enter 's' for right arrow
 *      enter 'w' for up arrow
 *      enter 'z' for down arrow
 *      enter 'q' for quit to the game
 */
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