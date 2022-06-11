#include<stdio.h>
int main()
{
   int choice;
   long num1, num2, x;
   printf("Please choose your option:"
          "\n1 = Addition"
          "\n2 = Subtraction"
          "\n3 = Multiplication"
          "\n4 = Division"
          "\n5 = Squares"
          "\n6 = exit"
          "\n\nChoice: ");
   scanf("%d", &choice);
   //while loop check whether the choice is in the given range
   while(choice < 1 || choice > 6)
   {
      printf("\nPlease choose the above mentioned option."
             "\nChoice: ");
      scanf("%d", &choice);
   }
   switch (choice)
   {
   case 1:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 + num2;
      printf("Sum = %ld", x);
      break;
   case 2:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 - num2;
      printf("Subtraction = %ld", x);
      break;
   case 3:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 * num2;
      printf("Product = %ld", x);
      break;
   case 4:
      printf("Enter Dividend: ");
      scanf("%d", &num1);
      printf("Enter Divisor: ");
      scanf("%d", &num2);
     //while loop checks for divisor whether it is zero or not
     while(num2 == 0)
     {
        printf("\nDivisor cannot be zero."
               "\nEnter divisor once again: ");
        scanf("%d", &num2);
     }
     x = num1 / num2;
     printf("\nQuotient = %ld", x);
     break;
   case 5:
      printf("Enter any number: \n");
      scanf("%ld", &num1);
      x = num1 * num1;
      printf("Square = %ld", x);
      break;
   case 6:
   return 0;
   default: printf("\nError");
   }
}