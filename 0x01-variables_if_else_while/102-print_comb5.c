#include <stdio.h>


/**
 * Author: Michael Iyanuoluwa Oduwaiye
 * Program: WinMingle Community C Training
 * Description: Prints all possible combinations of two two-digit numbers
 */

int main(void) {
	int num1 = 0;
	int num2; /* Second digit (num1+1 to 99) */


	while(num1 <= 98) {
		num2 = num1 + 1;

		while(num2 <= 99) {
		putchar((num1 / 10) + '0'); /* Tens digit of num1 */
		putchar((num1 % 10) + '0'); /* Units digit of num1 */
		
		/* Print space btw numbers */
		putchar(' ');

		/* Print second number (two digits) */
		putchar((num2 / 10) + '0'); /* Tens digit of num2 */
		putchar((num2 % 10) + '0'); /* Units digit of num2 */

		/* If the last combination is not 98 99, print comma and space */
		if (num1 != 98 || num2 != 99) {
			putchar(',');
			putchar(' ');
		}

		num2++; /* Move to next second number */		
		}
		num1++; /* Move to next first number */
	}

	putchar('\n');

	return (0);
}
