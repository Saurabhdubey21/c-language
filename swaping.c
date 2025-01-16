#include<stdio.h>
void swap(int,int);
void main(){
    int a=10,b=20;
    swap(a,b);
    printf("The value of Actual Arguents: a=%d,b=%d",a,b);
}
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("The value of formal arguments: x=%d,y=%d",x,y);
}