#include <stdio.h>
#include <stdlib.h> /* for the srand() */
#include <time.h> /* for the time f(x) */

/**
* Author: Michael Iyanuoluwa Oduwaiye
* Program: WinMingle Community C Training
* Description: Prints whether a random number is positive, negative, or zero
*/

int main(void) {
	int n;
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	
	if(n > 0) 
		printf("%i is positive\n", n);
	else if(n < 0)
		printf("%i is negative\n", n);
	else 
		printf("%i is zero\n", n);	

	return (0);
}
