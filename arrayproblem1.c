#include<stdio.h>
int main(){
    int size, i;
    printf("Enter size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The given integer array elements : ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        if(i<size-1){
            printf(" ");
        }
    }
    printf(" \n");
}