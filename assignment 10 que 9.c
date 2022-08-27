#include<stdio.h>
int check(int,int);
int main()
{
    int i,no,dig,a;
    printf("enter the number");
    scanf("%d",&no);
    printf("enter the digit");
    scanf("%d",&dig);
    a=check(no,dig);
    if(a==1)
    {
        printf("digit found");
    }
    else
    {
        printf("digit not found");
    }

}
int check(num,digit)
{
    int a,i;
     for(i=1;1;i++)
    {
        a=num%10;
        num=num/10;
        if(a==digit)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
}
