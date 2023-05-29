/*Write a C program to randomly access and read the details of a student from the binary file 
"students.dat" based on the roll number entered by the user.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    int age;
};
int main() 
{
    FILE *fp;
    struct student s;
    int n,rollnumber,found=0;
    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    printf("Enter roll number of student to search: ");
    scanf("%d", &rollnumber);
    while (fread(&s, sizeof(struct student), 1, fp)) 
	{
        if (s.roll == rollnumber) 
		{
            printf("Roll Number: %d\nName: %s\nAge: %d\n",s.roll,s.name,s.age);
            found = 1;
            break;
        }
    }
    if (!found) 
	{
        printf("Record not found\n");
    }
    fclose(fp);
    return 0;
}

