#include<stdio.h>
int arrange(int,int);
int fact(int);
int main()
{
    int num,rem,permutation;
    printf("enter the value of n");
    scanf("%d",&num);
    printf("enter the value of r");
    scanf("%d",&rem);
    permutation=arrange(num,rem);
    printf("\n the number of arrangement are %d",permutation);
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
int arrange(n,r)
{
    return(fact(n)/(fact(n-r)));
}
