#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    char op;
    printf("Enter two numbers");
    scanf("%f%f,&a,&b");
    fflush(stdin);
    printf("Enter operator");
    scanf("%c",&op);
    switch(op)
    {
        case'+':c=a+b;
        printf("Addition=%f",c);
        break;
        case'-':c=a-b;
        printf("Subtraction=%f",c);
        break;
        case'*':c=a*b;
        printf("Multiplication =%f",c);
        break;
        case'/':c=a/b;
        printf("Division=%f",c);
        break;
        default:printf("invalid Operator");
        break;
    }
    getch();
}