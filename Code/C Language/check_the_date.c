#include<stdio.h>
struct date {
    int day;
    int month;
    int year;
}d1;
void check(struct date d1){
    int x;
    if(d1.year>0){
        if(d1.month<=12 && d1.day>0){
            if(d1.month==2){
                if(d1.year % 4 == 0){
                    if(d1.day<=29 && d1.day>0)  x = 0;
                    else x = 1;
                }
                else {
                    if(d1.day<=28 && d1.day>0)  x = 0;
                    else x = 1;
                }
            }
            else {
                if(d1.month == 1 || d1.month == 3 || d1.month == 5 || d1.month == 7 || d1.month == 8 || d1.month == 10 || d1.month == 12){
                    if(d1.day<=31 && d1.day>0)  x = 0;
                    else x = 1;
                }
                // 1 3 5 7 8 10 12
                else {
                    if(d1.day<=30 && d1.day>0)  x = 0;
                    else x = 1;
                }
            }
            
        }
        else x = 1;
    }
    else x = 1;

    if (x==0)   printf("date is true");
    else    printf("date is false");

}
int main (){
    printf("enter any date : ");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    check(d1);
    return 0;
}