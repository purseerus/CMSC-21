//Program that displays one-month calendar

#include <stdio.h>

int main (void){

	//declare variables
	int i, days, first_day;

	/*ask user to input desired number of days
	  if the user inputs values less than 28 
	  and greater than 31, the input will be invalid*/

	printf ("Enter number of days in month: ");
	scanf("%d", &days);

    if (days <= 31 && days >= 28){

    	/*If the input is valid, then ask the user to 
    	  choose the starting day of the week*/

        printf ("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
        scanf("%d", &first_day);

        /*if the user inputs values less than 1 
	  	and greater than 7, the input will 
	  	be invalid*/

        if (first_day < 7 && first_day > 0){

        	//pad the first line
            for (i =1; i < first_day; i++)
                printf ("   ");

            //for each day in the month
            for (i = 1; i <= days; i++){
            	
            	//display output 
                printf("%3d", i);

                /*increment the day of the week and
                if the day of the week is zero
                then it will start a new line*/
                if ((first_day + i -1)%7 ==0)
                    printf("\n");
            }
            return 0;
        }
        else
            printf("Invalid Input");
	}
	else
		printf ("Invalid Input");

}
