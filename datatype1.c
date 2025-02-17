#include <stdio.h> 
 
struct Address { 
    char city[50]; 
    int pin; 
}; 
 
struct Employee { 
    int id; 
    char name[50]; 
    struct Address addr; // Nested structure 
}; 
 
int main() { 
    struct Employee e1 = {1, "saurabh", {"delhi", 831232}}; 
 
    printf("ID: %d\n", e1.id); 
    printf("Name: %s\n", e1.name); 
    printf("City: %s\n", e1.addr.city); 
    printf("PIN: %d\n", e1.addr.pin); 
 
    return 0;
}