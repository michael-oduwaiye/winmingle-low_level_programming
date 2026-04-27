#include "main.h"

/* Author: Michael Oduwaiye Iyanuoluwa 
 * Program: WinMingle C Community Training 
 * Description: Prints the alphabets with a new line using customized function
 */

void print_alphabet(void) {
	char x;

	for(x = 'a'; x <= 'z'; x++) {
		_putchar(x);
	}
	
	_putchar('\n');

}

/* void print_alphabet(void) {
	char c = 'a';

	while(c <= 'z') {
		_putchar(c);
		c++;
	}
	
	_putchar('\n');

}*/
