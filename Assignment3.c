//2200003637 Emre Koca
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //this is my library
#define NUM_MAX 99 //this is my max numbers.
int main(void)
{
	//this is my arrays
	int divided2[NUM_MAX];
	int divided3[NUM_MAX];
	int divided4[NUM_MAX];
	int divided5[NUM_MAX];
	int number; //this is my input number in order to enter via scanf
	int how_many_numbers_entered=0;
	//this is 2/3/4/5 counter
	int divided2count = 0;
	int divided3count = 0;
	int divided4count = 0;
	int divided5count = 0;
	
	



	printf("Enter integers (either 0 or negative value to terminate) :");
	while (1) //i did 1.Because true means 1
	{


		scanf("%d", &number);
		//if numbers equal or less than 0 it will be break
		if (number <= 0) {
			break;
		}
		//this is my number counter
		how_many_numbers_entered++;
		//this checks divide of number
		if (number % 2 == 0) {
			divided2[divided2count] = number;
			divided2count++;
		}
		//this checks divide of number
		if (number % 3 == 0) {
			divided3[divided3count] = number;
			divided3count++;
		}
		//this checks divide of number
		if (number % 4 == 0) {
			divided4[divided4count] = number;
			divided4count++;
		}
		//this checks divide of number
		if (number % 5 == 0) {
			divided5[divided5count] = number;
			divided5count++;
		}
	}

	printf("******************************************\nYou entered %d numbers.\n", how_many_numbers_entered);

	//for functions prints numbers
	printf("    %d of them are divided by two. The list is given below\n", divided2count);
	for (int dividing_numbers = 0;dividing_numbers < divided2count;dividing_numbers++) {
		printf("    %d", divided2[dividing_numbers]);
	}

	//for functions prints numbers
	printf("\n    %d of them are divided by three. The list is given below.\n",divided3count);
	for (int dividing_numbers = 0;dividing_numbers < divided3count;dividing_numbers++) {
		printf("    %d", divided3[dividing_numbers]);
	}

	//for functions prints numbers
	printf("\n    %d of them are divided by four. The list is given below.\n", divided4count);
	for (int dividing_numbers = 0;dividing_numbers < divided4count;dividing_numbers++) {
		printf("    %d", divided4[dividing_numbers]);
	}

	//for functions prints numbers
	printf("\n    %d of them are divided by five. The list is given below.\n", divided5count);
	for (int dividing_numbers = 0;dividing_numbers < divided5count;dividing_numbers++) {
		printf("    %d", divided5[dividing_numbers]);
	}


	return 0;
}