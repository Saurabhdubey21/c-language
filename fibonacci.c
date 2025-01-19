#include<stdio.h>
int rec(int);
void main(){
    int i,n;
    printf("Enter the Limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",rec(i));
    }
}
int rec(int x)
{
    if(x==0)
    return(0);
    else if(x==1)
    return(1);
    return (rec(x-1)+rec(x-2));
}