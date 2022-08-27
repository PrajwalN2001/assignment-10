#include<stdio.h>
int evo(int);
int main()
{
    int num;
    printf("enter the even number");
    scanf("%d",&num);
    if(evo(num))
        printf("number is even");
    else
        printf("number is odd");
    return 0;
}
int evo(int a)
{
    if(a%2==0)
        return(1);
    else
        return(0);
}
