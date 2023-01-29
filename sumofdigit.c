#include <stdio.h>

int main()
{
   int n, num, sum = 0, digit;

   printf("Enter a number to find sum of its digits\n");
   scanf("%d", &n);

   num = n;

   while (num != 0)
   {
      digit = num % 10;
      sum = sum + digit;
      num = num / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}
