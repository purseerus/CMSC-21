#include <stdio.h>

int main (void)
{
    int i;

	i = 1;

	while (i < 10){
		printf ("\nWhile: [%d]", i);
		i++;
	}

	do{
		printf ("\nDo-While:[%d]", i);
		i++;
	}while (i < 10);


	for (i = 1; i < 10; i++){

		printf ("\nFor: [%d]", i);
	}

}
