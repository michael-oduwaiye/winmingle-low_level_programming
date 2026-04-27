#include "main.h"

/* Author: Michael Oduwaiye
 * Program: WinMingle C Community Training
 * Description: Writes a function that checks for lowercase character
 */

int _islower(int c){

	if (c >= 'a' && c <= 'z'){
		return (1);
	}
	else {
		return (0);
	}
}
