#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    int *ptr; 
    ptr = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers, 5x2 =10 byte 
 
    if (ptr == NULL) { 
        printf("Memory allocation failed\n"); 
        return 1; 
    } 
 
    for (int i = 0; i < 5; i++) { 
        ptr[i] = i + 1; 
    } 
 
    for (int i = 0; i < 5; i++) { 
        printf("%d ", ptr[i]); 
    } 
 
    free(ptr); // Free the allocated memory 
    return 0; 
} 