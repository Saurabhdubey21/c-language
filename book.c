#include<stdio.h>
#include<string.h>
struct Book
{
    char name[20];
    float price;
    int  pages;
};
int main(){
    struct Book b1 = {"English",270.5,300};
    printf("Book Name: %s\n",b1.name);
    printf("Book Price: %f\n",b1.price);
    printf("BOOK pages: %d\n",b1.pages);
    return 0;
}