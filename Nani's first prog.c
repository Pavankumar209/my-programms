#include<stdio.h>
int main()
{
    int n,x,y;
    printf("enter two numbers:");
    scanf("%d%d",&n,&x);
    if(n<0 || x<0)
    {
        printf("error");
        exit(0);
    }
    if(((n>>x)&1) == 0)
    {
        y=n | (1<<x);
    }
    else
    {
        y=n & ~(1<<x);
    }
    printf("%d",y);
    return 0;
}