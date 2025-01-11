#include<stdio.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    float a,b,c,s,area;
    int n;
    printf("Enter:\n1:For rectangle\n2:For square\n3:For circle\n4:for triangle\n");
    scanf("%d",&n);
    switch(n)
    {
        case1:printf("Enter length and breadth of rectangle");
        scanf("%f%f",&a,&b);
        area=a*b;
        printf("Area of Rectangle:%f",area);
        break;
        case2:printf("Enter the side of Square");
        scanf("%f",&a);
        area=a*a;
        printf("Area  of Square:%f",area);
        break;
        case3:printf("Enter the radius of circle");
        scanf("%f",&a);
        area=3.14*a*a;
        printf("Area of Circle:%f",area);
        break;
        case4:printf("Enter the three sides of triangle");
        scanf("%f%f%f",&a,&b,&c);
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of Triangle:%f",area);
        break;
        default:printf("invalid Choice");
        break;
    }
        getch();
}   