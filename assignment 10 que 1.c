#include<stdio.h>
float area(int);
int main()
{
    int r;
    float aoc;
    printf("enter the radius of circle");
    scanf("%d",&r);
    aoc=area(r);
    printf("area of circle is %.2f",aoc);
    return 0;
}
float area(int a)
{
    float p;
    p=(3.14)*a*a;
    return (p);
}
