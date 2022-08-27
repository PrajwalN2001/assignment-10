#include<stdio.h>
int fact(int);
int main()
{
    int num,factorial;
    printf("enter the number");
    scanf("%d",&num);
    factorial=fact(num);
    printf("factorial of a number is %d",factorial);
    return 0;
}
int fact(int a)
{
    int i,b=1;
    for(i=1;i<=a;i++)
    {
       b=b*i;

    }
    return (b);
}

