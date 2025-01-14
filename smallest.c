#include<stdio.h>
int main(){
    int a[]={239,398,454,567,342,453,759 ,543};
    int i, smallest;
    for(i=0; i<=7;i++)
    {
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    printf("smallest number in array: %d\n",smallest);
    return 0;
}