#include<stdio.h>
void main()
{
    int n,d,s=0;
    printf("Enter  the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("The sum of digit:=%d",s);
}