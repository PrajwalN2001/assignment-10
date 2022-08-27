#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    prime(num);

}
int prime(num1)
{
    int m,j,i;
    for(i=2;1;i++)
        {

                for(m=i-1;m>1;m--)
                {
                    if(i%m==0)
                    {
                        break;
                    }
                }
            if(m==1)
                {
                      for(j=1;num1%i==0;j++)
                            {
                                printf("\n%d",i);
                                num1=num1/i;
                            }
                            if(num1==1)
                                break;

                }

        }
}

