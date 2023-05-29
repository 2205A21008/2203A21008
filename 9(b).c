#include <stdio.h>

enum Month 
{
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

int main() {
   int month;
   printf("Enter month number (1-12): ");
   scanf("%d", &month);

   switch(month) {
      case JANUARY:
         printf("January has 31 days.\n");
         break;
      case FEBRUARY:
         printf("February has 28 or 29 days.\n");
         break;
      case MARCH:
         printf("March has 31 days.\n");
         break;
      case APRIL:
         printf("April has 30 days.\n");
         break;
      case MAY:
         printf("May has 31 days.\n");
         break;
      case JUNE:
         printf("June has 30 days.\n");
         break;
      case JULY:
         printf("July has 31 days.\n");
         break;
      case AUGUST:
         printf("August has 31 days.\n");
         break;
      case SEPTEMBER:
         printf("September has 30 days.\n");
         break;
      case OCTOBER:
         printf("October has 31 days.\n");
         break;
      case NOVEMBER:
         printf("November has 30 days.\n");
         break;
      case DECEMBER:
         printf("December has 31 days.\n");
         break;
      default:
         printf("Invalid month number. Please try again.\n");
   }
   return 0;
}

