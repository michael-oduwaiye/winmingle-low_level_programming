#include "main.h"


int _abs(int a) {

	if (a < 0)
		return (-a); /* return positive if number is negative. E.g if a = -2, then a = -(-2) = 2 */
	else 
		return (a); /* return as the number is if zero / positive */

}
