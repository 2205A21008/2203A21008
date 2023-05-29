/*Write a C program to sort an array of structures using pointers. Sort the array based on
 roll numbers in ascending order and display the sorted list.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
} s[5];
void sort(struct student *s, int n) 
{
    int i, j;
    struct student temp;
    for(i=0;i<n;i++) 
	{
        for (j=i+1;j<n;j++) 
		{
            if((s+i)->roll>(s+j)->roll) 
			{
                temp=*(s+i);
                *(s+i)=*(s+j);
                *(s+j)=temp;
            }
        }
    }
}
int main() 
{
    int i,n=5;
    struct student *p;
    p=s;

    for(i=0;i<n;i++) 
	{
        printf("Enter Roll number of Student %d: ",i+1);
        scanf("%d",&(p+i)->roll);
        printf("Enter Name of Student %d: ",i+1);
        scanf("%s",(p+i)->name);
    }
    sort(p,n);
    printf("\nSorted list:\n");
    for(i=0;i<n;i++) 
	{
        printf("%d\t%s\n",(p+i)->roll,(p+i)->name);
    }
    return 0;
}

