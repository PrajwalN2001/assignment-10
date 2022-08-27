#include<stdio.h>
int combi(int,int);
int fact(int);
int main()
{
    int num,rem,combination;
    printf("enter the value of n");
    scanf("%d",&num);
    printf("enter the value of r");
    scanf("%d",&rem);
    combination=combi(num,rem);
    printf("\n the number of combination are %d",combination);
    return(0);

}
int fact(no)
{
    int i,facto=1;
    for(i=no;i>=1;i--)
    {
        facto=i*facto;
    }
    return facto;
}
int combi(n,r)
{
    return(fact(n)/(fact(n-r)*fact(r)));
}
