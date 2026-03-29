#include <stdio.h>

/**
* Author: Michael Iyanuoluwa Oduwaiye
* Program: WinMingle Community C Training
* Description: Prints the alphabet in lowercase then uppercase using putchar()
*/

int main(void) {
	char x = 'a';
	char y = 'A';

	while(x <= 'z') {
		putchar(x); 
		x++;
	}

	while(y <= 'Z') {
		putchar(y);
		y++;
	} 
	
	putchar('\n');
	
	return 0;	

}
