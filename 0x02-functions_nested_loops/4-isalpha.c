#include "main.h"

/** Author: Michael Iyanuoluwa Oduwaiye 
 * Program: WinMingle C Community Training 
 * Description: Checks if a character is an alphabet either lowercase or uppercase 
 */

int _isalpha(int c){

	if(c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
