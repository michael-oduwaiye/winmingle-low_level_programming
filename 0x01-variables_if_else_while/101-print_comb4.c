#include <stdio.h>

/**
 * Author: Michael Iyanuoluwa Oduwaiye
 * Program: WinMingle C Training
 * Description: Prints all possible combinations of two different digits
 */

int main(void) {
		int hundreds = 0; /* first digit */
		int tens; /* second digit */
		int units; /* third digit */

		/* Loop for hundreds digit: from 0 to 7 */
		while(hundreds <= 7) {
			tens = hundreds + 1;
			
			while (tens <= 8) {
				units = tens + 1;


				while(units <= 9) {
				/* Print three-digit combination */
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(units + '0');

					/* If the combination is not 789, print comma and space */
					if (hundreds !=7 || tens != 8 || units != 9) {
						putchar(',');
						putchar(' ');

					}
					units++; /* Move to next units digit */
				}
				tens++; /* Move to next tens digit */
			}
			hundreds++; /* Move to next hundreds digit */
		}
		putchar('\n');

	return (0);
}
