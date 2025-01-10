#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    printf("Number is prime number");
    else
    printf("Number is not prime number");
    getch();
}