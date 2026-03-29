#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Michael Iyanuoluwa Oduwaiye
 * Program: WinMingle Community C Training
 * Description: Prints the last digit of a random number and a message based on its value
 */

int main(void) {
	int n;
	int last;

	srand(time(0));
	n = rand();

	last = n % 10; 	
	/* Print the first output */
	printf("Last digit of %i is %i ", n, last);

	/* Conditions logic for the suffix */
	if (last > 5) 
	    printf("and is greater than 5\n");
	else if (last == 0) 
		printf("and is 0\n");
	else if (last < 6)
		printf("and is less than 6 and not 0\n");
	
	
	return 0;
}
