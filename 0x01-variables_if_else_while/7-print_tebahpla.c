#include <stdio.h>
#include <stdlib.h>

/**
 * Author: Michael
 * Program: WinMingle Community C Training
 * Description: Prints lowercase alphabet in reverse order
 */

int main(void) {
	char x = 'z';

	while(x >= 'a') {
		putchar(x); 
		x--; /* use a decrement operator */
	}
	
	putchar('\n');
	return 0;
}
