#include <stdio.h> 
#include <stdlib.h>


/**
* Author: Michael Iyanuoluwa Oduwaiye
* Program: WinMingle C Training
* Description: Prints all combinations of single-digit numbers separated by commas and spaces
*/

int main(void) {
	int number = 0;

	while(number <= 9 ) {
		putchar(number + '0'); /* number + '0' converts the integer to its character equivalent */

		if (number !=9 ) {
			putchar(',');
			putchar(' ');
		}

		number++;
	}

	putchar('\n');

	return 0;
}
