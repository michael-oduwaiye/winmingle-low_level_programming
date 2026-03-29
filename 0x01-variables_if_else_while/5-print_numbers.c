#include <stdio.h>
#include <stdlib.h>


/**
* Author: Michael Iyanuoluwa Oduwaiye
* Program: WinMingle Community C Training
* Description: Prints all single-digit numbers in base 10 starting from 0
*/

int main(void) {
	char x = '0';
	
	while(x <= '9') {
		putchar(x);
		x++;		
	}

	putchar('\n');
	return 0;

}
