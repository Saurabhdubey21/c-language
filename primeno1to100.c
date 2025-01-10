#include<stdio.h>
#include<conio.h>
void main ()
{
    int n,i,c;
    for(n=2;n<100;n++)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
        c++;
    }
    if(c==2)
    printf("%d\t",n);
}
getch();
}