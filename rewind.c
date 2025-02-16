#include <stdio.h> 
 
int main() { 
    FILE *file = fopen("example.txt", "w"); 
 
    if (file == NULL) { 
        printf("Error opening file\n"); 
        return 1; 
    } 
    fprintf(file, "Hello, World!\nThis is an example of fseek, ftell, and rewind."); 
    fseek(file, 6, SEEK_SET); 
    printf("File pointer moved to position: %ld\n", ftell(file));
    fseek(file, 5, SEEK_CUR); 
    printf("File pointer moved to position: %ld\n", ftell(file));
    fseek(file, -5, SEEK_END); 
    printf("File pointer moved to position: %ld\n", ftell(file));
    rewind(file); 
    printf("File pointer after rewind: %ld\n", ftell(file));
    fclose(file); 
    return 0; 
} 