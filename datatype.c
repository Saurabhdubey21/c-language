#include <stdio.h> 
struct Student { 
int id; 
char name[50]; 
float marks; 
}; 
int main() { 
struct Student s1 = {1, "Saurabh", 95}; 
printf("ID: %d\n", s1.id); 
printf("Name: %s\n", s1.name); 
printf("Marks: %.2f\n", s1.marks);  
}