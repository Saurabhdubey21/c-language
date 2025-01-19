#include<stdio.h>
int fact(int);
void main(){
    int n,f;
    printf("Enter a Number");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial=%d",f);
}
int fact(int num)
{
    int i,x=1;
    for(i=1;1<=num;i++)
    x=x*i;
}