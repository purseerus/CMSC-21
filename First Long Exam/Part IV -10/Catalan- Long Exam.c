#include <stdio.h>
#include <math.h>

int main (void){

	//declare variables and their data types
    int x;
	double y, Yn, tol;

	//setting value of the tolerance
	tol = 0.00001;

	//asking user for an input
	printf ("Please enter a Positive number: ");
	scanf("%d", &x);

	//default value of y
	y = 1;

	//iterative method for getting the square root
	Yn = (y +(x/y))/2;

	//iteraration until the absolute value of yn + 1 -y is equal to tol
	do{

		y = Yn; //update value of y
		Yn = (y +(x/y))/2 ;

	}while (fabs (Yn - y) > tol);

	//display result
	printf ("The square root of the postive integer %d is approximately %lf", x, y);

	return 0;

}
