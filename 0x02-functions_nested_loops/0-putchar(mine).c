#include <stdio.h>
#include <stdlib.h> /* for putchar() */

/**
 * Author: Michael Iyanuoluwa Oduwaiye
 * Program: WinMingle Community C Training
 * Description: 
 * Prints "_putchar" to screen followed by a new line. 
 * Program should also return 0. 
 * Compile with gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
 * -Wall --> Warn all, show all warnings
 * -Wextra --> Additional warning that -Wall did not cover
 * -Werror --> Treats all warnings as errors
 * -pedantic --> Makes sure your code follows the ISO C standard
 * -std=gnu89 --> Use GNU C89 standard for compiling 
 * _putchar.c usually contains a helper function called _putchar() that your program needs to print characters
 * GGC command structure: gcc [options] [source files] [output flag]
*/


int main(void) {
	char one = '_';
	char two = 'p';
	char three = 'u';
	char four = 't';
	char five = 'c';
	char six = 'h';
	char seven = 'a';
	char eight = 'r';

	putchar(one);
	putchar(two);
	putchar(three);
	putchar(four);
	putchar(five);
	putchar(six);
	putchar(seven);
	putchar(eight);

	putchar('\n');

	return (0);
}
