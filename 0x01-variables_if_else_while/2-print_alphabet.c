#include <stdio.h>
#include <stdlib.h>

/**
 * Author: Michael Iyanuoluwa Oduwaiye
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase using putchar
 */

int main(void) {
	char x = 'a'; /* x is a variable name here, not a string */

	while (x <= 'z') { /* the ascii value of x = 61 and z = 122 */
		putchar(x); /* this is the std fuction to print a character to the screen. We are not using printf() because it will output the ASCII values of each alphabet character */
		x++; /* the value of x is incremented from a = 61, to b = 62 */
	}
		putchar('\n');
	return 0;
	/* This is the only comment allowed in ISO C90 and not "//". It is called C++ Style comments. */
}
