/*Define a structure named "Book" with members: title (string), author (string), 
price (double) and rating (float). Declare an array of structures to store information 
about multiple books. Allow the user to input the details of the books and display them.*/
#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    double price;
    float rating;
};
int main() {
    struct Book book[100];
    int i, n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    for(i=0;i<n;++i) 
	{
        printf("Enter book title,author,price,rating:\n ");
        scanf("%s %s %lf %f", book[i].title,book[i].author,&book[i].price,&book[i].rating);
    }
    printf("\nB O O K\nTITLE\t\tAUTHOR\t\tPRICE\t\tRATING\n****************************************************************************\n");
    for(i=0;i<n;++i) 
	{
		printf("%s\t\t%s\t\t%lf\t\t%f",book[i].title,book[i].author,book[i].price,book[i].rating);
    }
    return 0;
}

