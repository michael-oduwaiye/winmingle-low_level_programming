#include <stdio.h>
#include <stdlib.h>

/**
 * Author: Michael
 * Program: WinMingle Community C Training
 * Description: Prints all single-digit numbers using putchar without char variables
 */

int main(void) {
	int x = 0;

	while(x < 10) {
		putchar(48 + x); /* using the ASCII table */
		x++;
	}
	
	putchar('\n');
	return 0;
}
