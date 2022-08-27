#include<stdio.h>
float simpleinterest(int,float,int);
int main()
{
    int time,principal;
    float rate,interest;
    time=2;
    principal=45000;
    rate=7;
    interest=simpleinterest(principal,rate,time);
    printf("simple intersert %.2f",interest);
    return 0;
}
float simpleinterest(int a,float b,int c)
{
    float si;
    si=(a*b*c)/100;
    return (si);
}

