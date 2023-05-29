/*Write a C program to create a binary file named "students.dat" to store information about 
students (name, roll, and marks). Allow the user to input the details of multiple students and 
write them to the file.*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
} s;
int main() {
    FILE *fptr;

    fptr = fopen("students.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file");
        exit(1);
    }
    int n,i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) 
	{
        printf("For Student %d\nEnter name: ",i+1);
        scanf("%s", s.name);
        printf("Enter roll number: ");
        scanf("%d", &s.roll);
        printf("Enter marks: ");
        scanf("%f", &s.marks);
        fwrite(&s, sizeof(s), 1, fptr);
    }
    fclose(fptr);
    return 0;
}
