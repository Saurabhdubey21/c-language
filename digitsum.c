#include<stdio.h>
int main(){
    int num, sum=0, digit;
    printf("enter 4 digit number: ");
    scanf("%d", &num);
    while (num>0)
    {
    digit=num%10;
    sum+=digit;
    num/=10;
}
printf("sum of digits:%d\n",sum);
return 0;
}