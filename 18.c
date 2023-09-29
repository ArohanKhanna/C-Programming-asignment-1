#include <stdio.h>
int main() {
   int year;
  
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if it is divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // the year is not a leap year if it is divisible by 100 but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // the year is a leap year if it is not divisible by 100 but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
