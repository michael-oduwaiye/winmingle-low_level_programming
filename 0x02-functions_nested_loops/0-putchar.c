#include "main.h" /* for _putchar() */
#include <stdlib.h> 

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
	int i = 0;

	char c;

	char a[] = "_putchar"; /* we shall run this through a loop for 8 items */
	
	while(i < 8) {
		c = a[i];

		_putchar(c);

		i++;
	}
	
	_putchar('\n'); /* Prints a new line */
	return (0);
}
