#include <stdio.h>

int main (void)
{

	//declare variables
	int num_1, num_2;

	//user input
	printf("Please enter a two-digit number: ");
	scanf("%1d%1d", &num_1, &num_2);

    printf("Number entered in words: ");

	//first digit
	switch (num_1 % 10)
	{
		case 1:

			switch (num_2 & 10)
			{
				case 0:
					printf("Ten");
				case 1:
					printf("Eleven");
				case 2:
					printf("Twelve");
				case 3:
					printf("Thirteen");
				case 4:
					printf("Fourteen");
				case 5:
					printf("Fifteen");
				case 6:
					printf("Sixteen");
				case 7:
					printf("Seventeen");
				case 8:
					printf("Eighteen");
				case 9:
					printf("Ninteen");
			}

		case 2:
			printf("Twenty");
			break;
		case 3:
			printf("Thirty");
			break;
		case 4:
			printf("Forty");
			break;
		case 5:
			printf("Fifty");
			break;
		case 6:
			printf("Sixty");
			break;
		case 7:
			printf("Seventy");
			break;
		case 8:
			printf("Eighty");
			break;
		case 9:
			printf("Ninety");
			break;
	}
	switch (num_2 % 10)
	{
		case 1:
			printf("-One");
			break;
		case 2:
			printf("-Two");
			break;
		case 3:
			printf("-Three");
			break;
		case 4:
			printf("-Four");
			break;
		case 5:
			printf("-Five");
			break;
		case 6:
			printf("-Six");
			break;
		case 7:
			printf("-Seven");
			break;
		case 8:
			printf("-Eight");
			break;
		case 9:
			printf("-Nine");
			break;


	}

	return 0;
}
