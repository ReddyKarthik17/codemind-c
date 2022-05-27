#include<stdio.h>
int main()
{
    int r,n,s=0,p=1,temp,a;
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
     r=n%10;
     s=s+r;
     n=n/10;
    }
    while (temp>0)
    {
        a=temp%10;
        p=p*a;
        temp/=10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number" );
    return 0;
}