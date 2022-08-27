void natural(int);
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    natural(num);
    return 0;
}
void natural(int no)
{
    int i;
    for(i=1;i<=no;i++)
    {
        printf("\n%d",2*i-1);
    }
}
