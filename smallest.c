#include<stdio.h>
int main(){
    int A[]={239,454,789,123,987,108,985}; 
    int i,  smallest;
    smallest=A[0];
    for(i=0; i<=6; i++)
    {
        if(A[i]<smallest){
            smallest=A[i];
        }
    }
    printf("smallest number in array: %d\n",smallest);
    return 0;
}