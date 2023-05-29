#include<stdio.h>
struct employee
{
    int id,salary;
    char name[25];
}emp[100];

void main()
{
    int i,n;
    printf("Enter the no of employees :");
    scanf("%d",&n);
    printf("Enter employee id , name , salary :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d",&emp[i].id,emp[i].name,&emp[i].salary);
    }
    printf("\nEMP_ID\t\tEMP_NAME\t\tEMP_SAL\n***************************************************\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\n",emp[i].id,emp[i].name,emp[i].salary);
    }
}
