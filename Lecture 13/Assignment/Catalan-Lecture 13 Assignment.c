#include <stdio.h>
#include <math.h>

//structure for points and other data types
struct line{
	struct point{
		float x;
		float y;
	}point1, point2;
	float midpoint;
	float slope;
	float distance;
};

//function for solving slope
float solveSlope(struct line line1){

	//solve the values of x and y separately
	float y = line1.point1.y - line1.point2.y; 
	float x = line1.point1.x - line1.point2.x;
	float slope = y/x; //dividing the values of x and y
	return slope;
}

//function for solving the midpoint
void solveMidpoint(struct line line1){

	//using the midpoint formula, solve the value of x and y separately
    float midpoint_x = (line1.point1.x + line1.point2.x)/2;
    float midpoint_y = (line1.point1.y + line1.point2.y)/2;

    //printing the value of the midpoint
    printf("\nMidpoint: %f , %f\n", midpoint_x,midpoint_y);
}
//function for solving the distance between two points
float solveDistance(struct line line1){

	/*just like with the previous functions, we need to solve
	  the value of x and y separately. This can improve the
	  readability of the code*/
	int x = (line1.point1.x - line1.point2.x) * (line1.point1.x - line1.point2.x);
	int y = (line1.point1.y - line1.point2.y) * (line1.point1.y - line1.point2.y);
	
	//utilizing square root function for the distance
	float distance = sqrt(x+y);
	return distance;
}
//function for getting the slope-intercept form
void getSlopeInterceptForm (struct line line1){
 
 	/*We can plug in the value of the slope and the value of x
 	  into y = mx + b*/
    float b = line1.point1.y - (line1.slope*line1.point1.x);

    printf("\ny = %fx + %f\n",line1.slope, b);

}

int main(void){

	//declare variables and data type
    struct line points;
    float slope, midpoint,distance;

    //user input for the values of x1 and y1
	printf("Enter x and y for point1: ");
	scanf("%f%f", &points.point1.x, &points.point1.y);

	//user input for the values of x2 and y2
	printf("Enter x and y for line2: ");
	scanf("%f%f", &points.point2.x, &points.point2.y);

	//printing the slope
	slope = solveSlope(points);
	points.slope = slope; //assign value of slope to the structure member
	printf("\nSlope: %f\n", points.slope);

	//displaying midpoints
	solveMidpoint(points);

	//printing the distance
	distance = solveDistance(points);
	points.distance = distance; //assign value of distance to the structure member
	printf("\nDistance between 2 points: %f\n", points.distance);

	//slope-intercept form
	getSlopeInterceptForm(points);
}

