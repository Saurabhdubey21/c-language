#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str[] = "Locate the first 't'."; 
    char *pos = strchr(str, 't'); 
    if (pos) 
        printf("Found 't' at position: %ld\n", pos - str); 
    else 
        printf("Character not found\n"); 
    return 0; 
} 