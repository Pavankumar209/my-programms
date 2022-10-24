#include<stdio.h>
int main()
{
    int x,y,z,a=15,ans;
    printf("enter your number:");
    scanf("%d",&x);
    y=x>>4;
    z=(x & a)<<4  ;
    ans=y | z;
    printf("answer after changing nibbles is %d",ans);
    return 0;
}