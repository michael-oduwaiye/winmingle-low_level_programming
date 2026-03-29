#include <stdio.h>
#include <stdlib.h>

/**
 * Author: Michael Iyanuoluwa Oduwaiye
 * Program: WinMingle Community C Training
 * Description: Prints the alphabet in lowercase except letter 'q' and 'e'
 */

int main(void) {
	char x = 'a'; /* x is a variable name here, not a string */

	while (x <= 'z') { 
		if (x != 'e' && x != 'q') { /* this is to skip 'e' and 'q' in the ouput. both conditions must be T T */
			putchar(x);
		}

		x++; 
	}
		putchar('\n');
	return 0;
}
