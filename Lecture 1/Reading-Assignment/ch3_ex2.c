#include <stdio.h>

/*The function int tells us that the function main
   returns an integer value*/

int main(void){

	/*First we must declare  the variables
	   and their data type which is integer 
	   and a floating point*/

	int i;
	float x;

	/*Next is we are going to assign values to our
		variables*/

	i = 40;
	x = 839.21f;

	/*We will use the "|" to determine how much 
	  space each value will have when printed*/

	/*The number before "%d" will indicate
	the number of minimum characters the console
	will print */

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
}