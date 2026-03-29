#include <stdio.h> 
#include <stdlib.h>


/**
* Author: Michael Iyanuoluwa Oduwaiye
* Program: WinMingle C Training
* Description: Prints all possible combinations of two different digits
*/

int main(void) {
	int tens = 0; /* first digit */
	int units; /* second digit */

	/* Loop for the first digit: from 0 to 8. Rule says no repeated combination */
	while(tens <= 8 ) {
		units = tens + 1;

		/* Loop for the second digit: from units to 9 */	
		while(units <= 9) {
	
		putchar(tens + '0'); /* print tens digit */
		putchar(units + '0'); /* print units digit */
		
			if(tens !=8 || units != 9) { /* if the last combination is not 89, print comma and space */
				putchar(',');
				putchar(' ');
			}
			
			units++; /* Move to the next second digit */
		}
		tens++; /* move to the next first digit */
	}

	putchar('\n');

	return 0;
}
