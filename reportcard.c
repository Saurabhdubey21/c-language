#include<stdio.h>
#include<stdlib.h>
struct student {
    int Roll;
    float Marks;
    char Name;
};
int main(){
    struct student *ptr;
    ptr=(struct student*)malloc(1*sizeof(struct student));
    ptr->Roll=134;
    ptr->Marks=90;
    printf("Name:Saurabh Kumar Dubey\n",ptr->Name);
    printf("Roll:%d\n",ptr->Roll);
    printf("Marks:%.2f\n",ptr->Marks);
    free(ptr);
    return 0;
}