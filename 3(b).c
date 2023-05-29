/*Write a C program to find the book with the highest rating and lowest price from 
the array of structures.*/
#include <stdio.h>
#include <stdlib.h>

struct book {
    char title[50];
    char author[50];
    float price;
    int rating;
};

int main() {
    struct book b[5] = {
        {"The Alchemist", "Paulo Coelho", 10.0, 4},
        {"The Da Vinci Code", "Dan Brown", 12.0, 3},
        {"The Catcher in the Rye", "J.D. Salinger", 8.0, 5},
        {"To Kill a Mockingbird", "Harper Lee", 9.0, 4},
        {"The Great Gatsby", "F. Scott Fitzgerald", 11.0, 3}
    };
    
    struct book *highest_rating = &b[0];
    struct book *lowest_price = &b[0];
    int i;
    for (i = 1; i < 5; i++) {
        if (b[i].rating > highest_rating->rating) {
            highest_rating = &b[i];
        }
        
        if (b[i].price < lowest_price->price) {
            lowest_price = &b[i];
        }
    }
    
    printf("Book with highest rating: %s\n", highest_rating->title);
    printf("Book with lowest price: %s\n", lowest_price->title);
    
    return 0;
}

