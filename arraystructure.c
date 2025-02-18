#include <stdio.h> 
struct Book { 
    int id; 
    char title[50]; 
    float price; 
};
int main() { 
    struct Book books[3] = { 
{1, "C Programming", 300.50}, 
{2, "Data Structures", 450.75}, 
{3, "Algorithms", 500.00} 
}; 
for (int i = 0; i < 3; i++) { 
printf("Book ID: %d\n", books[i].id); 
printf("Title: %s\n", books[i].title); 
printf("Price: %.2f\n\n", books[i].price); 
} 
return 0; 
}