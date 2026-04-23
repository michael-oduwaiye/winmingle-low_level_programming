#include "main.h"

/* Author: Michael Oduwaiye Iyanuoluwa
 * Program: WinMingle C Community Program
 * Description: Prints lowercase alphabet ten times in a new line
 */

void print_alphabet_x10(void) {
	int i = 0;

	while (i < 10) {
		char x = 'a';

		while(x <= 'z') {
			_putchar(x);
			x++;
		}

		_putchar('\n');
		i++;
	}
}
