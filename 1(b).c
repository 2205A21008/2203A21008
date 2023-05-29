#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
} emp[10];

int main() {
    int i, n;
    float total_salary = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        scanf("%s %d %d", emp[i].name,&emp[i].id,&emp[i].salary);

        total_salary+=emp[i].salary;
    }

    printf("\nTotal salary of all employees = %.2f\n", total_salary);

    return 0;
}

