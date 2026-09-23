#include <stdio.h>
// #include<conio.h>
// #include<stdlib.h>
char ans[9] = {'1','2','3','4','5','6','7','8','9'};
char xoro;
int start,position,gameover=0,count=0;
void reset(){
    gameover=0;
    count=0;
    ans[0] = '1';
    ans[1] = '2';
    ans[2] = '3';
    ans[3] = '4';
    ans[4] = '5';
    ans[5] = '6';
    ans[6] = '7';
    ans[7] = '8';
    ans[8] = '9';    
}
int winning(){
        if(gameover==100)   {printf("\nplayer 1 was won the game ");     return 1;}
        else if (gameover==200)     {printf("\nplayer 2 was won the game ");     return 1; }
        else if (count==9)    {printf("\tDRAW THE GAME");        return 1;}
        
    return 0;
}
void draw_box(){
    system("cls");
    printf("\t\tTic Tac Toe Game :-\n\n");
    printf("\t\t---:---:---\n");
    printf("\t\t %c : %c : %c \n",ans[0],ans[1],ans[2]);
	printf("\t\t---:---:---\n");
	printf("\t\t %c : %c : %c \n",ans[3],ans[4],ans[5]);
	printf("\t\t---:---:---\n");
	printf("\t\t %c : %c : %c \n",ans[6],ans[7],ans[8]);
}
void update(){
    // ans[position-1] = xoro;
    if(start%2==0)      ans[position-1] = '0';
    else        ans[position-1] = 'x';
}
int check_num(){
    if(ans[position-1]=='x' || ans[position-1]=='0')    return 1;
    else    return 0;
}
void check(){
    if((ans[0]=='x'&&ans[1]=='x'&&ans[2]=='x'))    gameover=100;
    else if (ans[0]=='0'&&ans[1]=='0'&&ans[2]=='0')     gameover=200;
    else if (ans[3]=='x'&&ans[4]=='x'&&ans[5]=='x')  gameover=100;
    else if (ans[3]=='0'&&ans[4]=='0'&&ans[5]=='0')     gameover=200;
    else if (ans[6]=='x'&&ans[7]=='x'&&ans[8]=='x')  gameover=100;
    else if (ans[6]=='0'&&ans[7]=='0'&&ans[8]=='0')     gameover=200;
   
    else if (ans[0]=='x'&&ans[3]=='x'&&ans[6]=='x')    gameover=100;
    else if (ans[0]=='0'&&ans[3]=='0'&&ans[6]=='0')     gameover=200;
    else if (ans[1]=='x'&&ans[4]=='x'&&ans[7]=='x')  gameover=100;
    else if (ans[1]=='0'&&ans[4]=='0'&&ans[7]=='0')     gameover=200;
    else if (ans[2]=='x'&&ans[5]=='x'&&ans[8]=='x')  gameover=100;
    else if (ans[2]=='0'&&ans[5]=='0'&&ans[8]=='0')     gameover=200;

    else if (ans[0]=='x'&&ans[4]=='x'&&ans[8]=='x')    gameover=100;
    else if (ans[0]=='0'&&ans[4]=='0'&&ans[8]=='0')     gameover=200;
    else if (ans[2]=='x'&&ans[4]=='x'&&ans[6]=='x')  gameover=100;
    else if (ans[2]=='0'&&ans[4]=='0'&&ans[6]=='0')     gameover=200;

}
int main(){

    START_HEAR:
    draw_box();
    printf("player 1 symbol :x:\nplayer 2 symbol :0:\n");
    
    printf("who will start the game : playr 1 or player 2 :- ");
    scanf("%d",&start);

    if(start==1||start==2){

        while(1){    
            if(start==2)  printf("\nplayer 2`s turn");
            else    printf("\nplayer 1`s turn ");
            printf("\nenter position and symbol for the player :- ");
        
            scanf("%d",&position);
            
                
                if (check_num()){
                    printf("\nenter valid position\nagain");
                    getch();
                }
                else{
                    
                    // scanf(" %c",&xoro);

                    update();
                    check();
                    
                    draw_box();
        
                    if(winning()){
                        printf("\ndo you wnat to play continue : enter y for YES and n for NO :- \n");
                            scanf(" %c",&xoro);
                            if(xoro=='y'){
                                reset();
                                goto START_HEAR;
                                
                            }
                        else{
                            goto END_HEAR;
                            // return 2;
                        }
                    }
                    count++;
                    if(count==9){
                        printf("your match is draw \n");
                        {
                            printf("\ndo you wnat to play continue : enter y for YES and n for NO :- \n");
                            scanf(" %c",&xoro);
                            if(xoro=='y'){
                                reset();
                                goto START_HEAR;
                                
                            }
                            else{
                                goto END_HEAR;
                                // return 2;
                            }
                        }
                        
                    }
                    start++;
                }
            }   
    }

    END_HEAR:
	return 0;
}
