#include <unistd.h> /* header file to use the write() function */

/* We are creating a script that will enable us print some character to the screen without using printf and puts */

int _putchar (char c) { /* main only takes zero or two arguments. */

	

	return	write(1, &c, 1); /* low-level system call to print a character */

	/* 1 --> stdout (standard output/screen)
	 * &c --> Address of variable c
	 * 1 --> Number of bytes to write (1 byte = 1 character)	
	 */
}
