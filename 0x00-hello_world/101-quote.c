#include <unistd.h>

/* Author: Michael Iyanuoluwa Oduwaiye
 * Program: Winmingle Community C Training
 * Description: Prints a quote to standard error using write and returns 1
 * Lessons: #Difference between stdout vs stderr
 * 			#How low-level output works (write)
 * 			#How program communicate errors
 */

int main(void) {
	// write() sends output directly to a file descriptor
	// 2 is standard error (stderr)
	// 59 is the number of characters
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015.10.19\n", 59);

	return(1); // program exits with status code 1
}
