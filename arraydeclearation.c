#include<stdio.h>
int main(){
    int arr[8]={10,20,30,40,50,65,76,87};
    printf("Elements of the array: \n");
    for(int i=0; i<8;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}