#include <stdio.h> 
#include <string.h> 
int main() { 
char source[] = "Hello"; 
    char destination[10]; 
    strcpy(destination, source); 
    printf("Copied String: %s\n", destination);  // Output: Hello 
    return 0; 
} 