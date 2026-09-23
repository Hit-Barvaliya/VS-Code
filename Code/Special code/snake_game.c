#include<stdio.h>
#include<conio.h>
#include<time.h>
// #include<stdlib.h>
#include<windows.h>

int posX[10]={0},posY[10]={0},headposX=15,headposY=5,foodx,foody,gameover=1,count=0,abc=0;
char ch,ch2;

void food_generate(){
    foodx = rand() % 30 + 1;
    foody = rand() % 10 + 1;
}

void check_gameover(){
    for(int i=0;i<count;i++){
        if(headposX==posX[i]&&headposY==posY[i])    gameover=0; 
    }
    
    if(headposY==0||headposX==0||headposX==31||headposY==11)    gameover=0;
}

void set_up(){

    for(int i=0;i<count;i++){
        posX[i]=0;posY[i]=0;
    }
    headposX=15,headposY=5,gameover=1,count=0,abc=0;
}

void update_posotion(){


        int prevX = headposX;
        int prevY = headposY;
        int prevX2,prevY2;

        for(int i=0;i<count;i++){
            prevX2=posX[i];
            prevY2=posY[i];
            posX[i]=prevX;
            posY[i]=prevY;
            prevX=prevX2;
            prevY=prevY2;           
        }

    if(foodx==headposX&&foody==headposY){
        count++;
        food_generate();
    }   

    if(ch=='a') {
        headposX--;
        Beep(1000,200);
    }
    else if(ch=='d') {
        headposX++;
        Beep(1000,200);
    }
    else if(ch=='w') {
        headposY--;
        Beep(1000,200);
    }
    else if(ch=='s') {
        headposY++;
        Beep(1000,200);
    }

}

void draw_border(){
    for(int i=0;i<=11;i++){
        for(int j=0;j<=31;j++){
            
            if(i==0||j==0||i==11||j==31)    printf("#");
            
            else {
                 if (i==headposY&&j==headposX)  printf("O");
                else if (i==foody&&j==foodx)    printf("F");
               
                else{
                    abc=0;
                for(int k=0;k<count;k++){
                    if(i==posY[k]&&j==posX[k]){
                        printf("o");
                        abc=1;
                    }
                }
                if(abc==0)    printf(" ");  
                }
            }    
        }
        printf("\n");
    }
}
int main(){

    srand(time(0));  //---> this line is medantary when we use sleep()
label1:
    food_generate();
    set_up();
    for(int i=0;i<15;i++){
        if(foodx==posX[i]||foodx==headposX)     foodx = rand() % 30 + 1;
        if(foody==posY[i]||foody==headposY)     foody = rand() % 10 + 1;
    }
    draw_border();

    while(gameover){

        if(kbhit()) ch = getch();
        Sleep(400);
        // Beep(800,50);
        update_posotion();
            
            system("cls");
            draw_border();
            check_gameover();
    // this is for slowdown the speed of execution
            // for(int i=0;i<10000;i++){
            //     for(int j=0;j<10000;j++){}
            // }
    }
    printf("<------------------------->\nyour score is :- %d.\n<------------------------->\n",count*10);
    Beep(400,300);
    Beep(300,300);
    Beep(200,500);
    printf("\nenter 1 to restart the game :- ");
    scanf("%d",&abc);
    if(abc==1)  goto label1;
    return 0;
}