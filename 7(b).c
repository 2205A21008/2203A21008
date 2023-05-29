/*Write a C program to read the contents of a text file named "data.txt" and display them on the
 console*/
#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    // Open the file in read mode
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    // Read the file character by character and display it
    while ((ch=fgetc(fp))!= EOF) 
	{
        printf("%c", ch);
    }
    // Close the file
    fclose(fp);
    return 0;
}
