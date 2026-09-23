#include<stdio.h>

int main()
{
    struct person {
    int age;
    float salary;
    char name[50];
    }a,b;
    a.salary = 10000;
    strcpy(a.name,"HELLO");
    b.age = 59;
    printf("%s",a.name);
    printf("\n%d\n",b.age);
    printf("%f",a.salary);
    return 0;
}