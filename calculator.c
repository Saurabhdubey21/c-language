#include<stdio.h>
void addition();
void subtraction();
void multiplication();
void division();
void main ()
{
    printf("Calculator");
    addition();
    subtraction();
    multiplication();
    division();
}
void add()
{
    int n,d,s=0;
    printf("Enter  the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10
        s=s+d;
        n=n/10;
    }
    printf("The sum of numbers:=%d"s);
    }