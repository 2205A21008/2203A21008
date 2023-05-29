/*Define an enumeration named "Month" with constants representing the months of the year.
 Write a C program to input a month number from the user and display the corresponding 
 month name using the enumeration.*/
#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() 
{
    int monthNumber;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber>=JANUARY && monthNumber<=DECEMBER)
	{
        enum Month month=monthNumber;

        switch(month) 
		{
            case JANUARY:
                printf("January\n");
                break;
            case FEBRUARY:
                printf("February\n");
                break;
            case MARCH:
                printf("March\n");
                break;
            case APRIL:
                printf("April\n");
                break;
            case MAY:
                printf("May\n");
                break;
            case JUNE:
                printf("June\n");
                break;
            case JULY:
                printf("July\n");
                break;
            case AUGUST:
                printf("August\n");
                break;
            case SEPTEMBER:
                printf("September\n");
                break;
            case OCTOBER:
                printf("October\n");
                break;
            case NOVEMBER:
                printf("November\n");
                break;
            case DECEMBER:
                printf("December\n");
                break;
        }
    } 
	else 
	{
        printf("Invalid month number.\n");
    }
    return 0;
}

