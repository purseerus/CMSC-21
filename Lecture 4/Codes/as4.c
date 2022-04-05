//Program that computers for the power of two

#include <stdio.h>

int main (void){

	//declare variables
	int i, exponent, result;

	//ask user to input values for the power of two
	printf ("Enter exponent value: ");
	scanf("%d", &exponent);

	//initialize values
	i = 1;
	result = 1;

	/*2 is the base number while the
	  value the user entered will be the 
	  exponent*/
	while (i <= exponent){
		result *= 2;
		i++;
	}

	//display result
	printf ("Result: %d", result);
}

