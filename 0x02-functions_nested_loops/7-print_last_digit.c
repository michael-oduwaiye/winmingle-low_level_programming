#include "main.h"

int print_last_digit(int n) {
	int last;

	if (n < 0) 
		last = (-n) % 10; /* convert to positive first */
	else 
		last = n % 10; 

	/* Print last digit as a character */
	_putchar(last + '0'); /* convert to ASCII value */
	
	return (last);
}
