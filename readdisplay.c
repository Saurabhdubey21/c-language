#include <stdio.h> 
 
int main() { 
    FILE *file; 
    char content[] = "This is a sample text written into the file.\nThis is the second line.\n"; 
    file = fopen("sample.txt", "w"); 
    if (file == NULL) { 
        printf("Error opening the file for writing.\n"); 
        return 1; 
    } 
    fprintf(file, "%s", content);  
    fclose(file); 
    printf("Content has been written to the file.\n");  
    file = fopen("sample.txt", "r"); 
    if (file == NULL) { 
        printf("Error opening the file for reading.\n"); 
        return 1; 
    } 
    printf("\nReading the content from the file:\n"); 
    char ch; 
    while ((ch = fgetc(file)) != EOF) { 
        putchar(ch);
    } 
    fclose(file); 
 
    return 0; 
} 