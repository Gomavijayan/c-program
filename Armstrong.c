
#include <math.h>
#include <stdio.h>
int main() {
   int low, high, number, originalNumber, rem, count = 0;
   double result = 0.0;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &low, &high);
   printf("Armstrong numbers between %d and %d are: ", low, high);

   for (number = low + 1; number < high; ++number) {
      originalNumber = number;

   
      while (originalNumber != 0) {
         originalNumber /= 10;
         ++count;
      }

      originalNumber = number;

  
      while (originalNumber != 0) {
         rem = originalNumber % 10;
         result += pow(rem, count);
         originalNumber /= 10;
      }

      if ((int)result == number) {
         printf("%d ", number);
      }

      count = 0;
      result = 0;
   }

   return 0;
}
