#include <stdio.h>

/*The function int tells us that the function main
   returns an integer value*/

int main(void){

   /*First we must declare f the variables
      and their data type which is integer */

   int num1, denom1, num2, denom2, result_num, result_denom;

   /*Then we need an input from the user for the values of our
   fraction, we obtain this by using the fucntion scanf,Also,
   we need to specify the arguments for the user input*/

   printf ("Enter first fraction: ");
   scanf ("%d/%d", &num1, &denom1);

   printf("Enter second fraction: ");
   scanf("%d/%d", &num2, &denom2);

   /*Then we will assign the formula for adding
   the fractions to the variables we have declared before.
   In this case, we will have two formulas, one for the
   numerator and one for the denominator*/

   result_num = num1 * denom2 + num2 *denom1;

   result_denom = denom1 * denom2;

   /*Lastly, we will print the result, we should write
   the variables based on their order of printing*/

   printf("The sum is %d/%d\n", result_num, result_denom);

   return 0;

}
