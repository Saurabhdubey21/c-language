#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char source[] = "Hello"; 
    char destination[10]; 
    strncpy(destination, source, 3); 
    destination[3] = '\0';  // Ensure null termination 
    printf("Copied String: %s\n", destination);  // Output: Hel 
    return 0; 
}