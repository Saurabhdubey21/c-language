#include<stdio.h>
int main(){
    int i,n;
    printf("table of n: ");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        printf("n*%d=%d\n",i,n*i);
    }
    return 0;
}