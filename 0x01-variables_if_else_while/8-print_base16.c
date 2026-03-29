#include <stdio.h>

/**
* Author: Michael Iyanuoluwa Oduwaiye
* Program: WinMingle Community C Training
* Description: Prints all numbers of base 16 in lowercase: 0123456789abcdef
*/

int main(void) {
	char hex = '0';
    char letter = 'a';

	/* Print digits 0-9 */
	
	while(hex <= '9') {
		putchar(hex);
		hex++;
	}

	/* Print letters a-f */


	while(letter <= 'f') {
		putchar(letter);
		letter++;
	}
	
	putchar('\n');

	return 0;
}
