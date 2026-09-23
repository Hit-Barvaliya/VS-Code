#include <stdio.h>

int main()
{
    int l, b, a, p;
    printf("Enter length : ");
    scanf("%d", &l);
    printf("Enter breath : ");
    scanf("%d", &b);
    a = l * b;
    p = 2 * (l + b);
    if (a > p)
    {
        printf("area is bigger then perimeter");
    }
    if (p > a)
    {
        printf("perimeter is bigger then area");
    }
    if (a == p)
    {
        printf("area is equal to perumeter");
    }
    return 0;
}