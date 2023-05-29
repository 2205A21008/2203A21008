/*Write a C program to create a text file named "data.txt" and allow the user to enter text. 
Append the entered text to the file.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char text[100];
    // Open the file in append mode
    fp = fopen("data.txt", "a");
    if (fp == NULL) 
	{
        printf("Error opening file!\n");
        exit(1);
    }
    // Ask the user to enter text
    printf("Enter text: ");
    fgets(text, 100, stdin);
    // Append the text to the file
    fprintf(fp, "%s", text);
    // Close the file
    fclose(fp);
    return 0;
}

