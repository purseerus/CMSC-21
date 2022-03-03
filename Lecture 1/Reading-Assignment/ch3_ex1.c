#include <stdio.h>

/*The function int tells us that the function main
   returns an integer value*/

int main (void){

	/*First we must declare  the variables
	   and their data type which is integer 
	   and a floating point*/

	int i, j;
	float x,y;

	/*Next is we are going to assign values to our
		variables*/

	i = 10;
	j = 20;
	x = 43.2892f;
	y = 5527.0f;

	/*Then we will display the result using the print 
	function the "%d" and "f% indicates where the variables
	should be printed and what data type the variable is. 
	We should also write the variables at the end based on
	their order of printing
	*/

	printf ("i = %d, j = %d, x = %f, y=%f\n", i, j, x, y);
}
