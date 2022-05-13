#include <stdio.h>

/*using macros to define size of the array*/
#define N_ROWS 8        
#define N_COLUMNS 8

int main(void){
    /*declaring variables*/     
    int user_input, i, j;  

    /*array of strings for final output*/ 
    char *road_stations[]={"A", "B", "C", "D", "E", "F", "G", "H"}; 
    
    /*array for 2d matrix printing*/
    char *array_stations[]= {"  A", "  B","[C]","[D]", "  E", "  F", "  G", "  H"};   

    /*2d array*/

    int road_networks[N_ROWS][N_COLUMNS]= { 
        { 1, 1,0,0, 0, 1, 0, 0},
        { 1, 1,1,0, 0, 0, 0, 0},
        { 0, 1,1,0, 1, 1, 0, 0},
        { 0, 0,0,1, 1, 0, 0, 0},
        { 0, 0,0,1, 1, 0, 0, 0},
        { 1, 0,1,0, 0, 1, 0, 0},
        { 1, 0,0,1, 0, 0, 1, 0},
        { 0, 0,0,0, 0, 1, 0, 1}
    };


/*array header*/
printf("         A       B       [C]     [D]     E       F       G       H\n"); 
for(i= 0;i < N_ROWS; i++){  //iterate throughrows
    printf("%s",array_stations[i]); 
    for (j= 0; j < N_COLUMNS; j++){ //iterate through columns
        printf("%8d",road_networks[i][j]);  //print 1 and 0 values
    }
    printf("\n");
}

printf("\n");

/*asking input from the user*/
printf("Which point are you located? 0- A,1- B, 2- C, 3- D, 4- E, 5- F, 6- G, 7- H \n");   
scanf("%d",&user_input);   

/*print starting point*/
printf("\nAt point: %s", road_stations[user_input]);   

/*declare locator variables*/
int locator;   

/*iterate locator through columns*/
for(locator= 0; locator < N_COLUMNS;){ 
    if(road_networks[user_input][locator] == 1){   //true value
       printf("\nNow at point: %s",road_stations[locator]); //print current location

       if (locator == 2){   // when the locator is at column C
        printf("\nArrived at charging station: %s", road_stations[locator]);    //print indication that the iteration has arrived at charging station C
        break;  
       }
       else if (locator == 3){  //when locator arrives at column D
        printf("\nArrived at charging station: %s", road_stations[locator]);    //print the indication that the iteration has arrived at charging station D
        break;  
       }
       user_input = locator;    //setting the value of the user input into the value of the locator
       locator += 1 ;   //increment 1 to the value of the locator to avoid an infinite loop
    }
    else if(locator == 7){  //when the locator reaches the value 7 without arriving at the nearest charging station
            locator = 0;    //resetting the value of the locator to continue the loop
       }
    else{
        locator += 1;   //increment the value of 1 when the locator lands on a false location
    }

}
return 0;
}
