#include<stdio.h>
int main(){
    char str[100];
    int i, count=0;
    printf("enter a string");
    scanf("%s",str);
    printf("vowels in string: ");
    for (i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='o'|| str[i]=='u'||
        str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]
        =='O'|| str[i]=='U')
        {
        printf("%c",str[i]);
        count++;
        }
    }
    printf("\nNumber of vowels:%d\n",count);
    return 0;
}