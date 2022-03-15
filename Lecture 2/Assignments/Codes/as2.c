#include <stdio.h>

int main (void)
{

	/*declare variables*/

	int num, n1, n2, rev_num;

	/*ask to input a number to reverse*/
	printf("Please enter a 3-digit number: ");
	scanf("%d",&num);


	/*We get the last digit of the number
	  by getting the remainder and store it
	  in a variable*/
	n1 = num%10;
	num = num/10;
	n2 = num%10;
	num = num/10;


	/*Multiply the remainder by 10 and and
	  the new value of the variable num
	  to get the reverse*/

	rev_num = ((n1*100) + (n2*10) + num);

	/*print result*/
	printf("Reverse: %d \n",rev_num);


}

