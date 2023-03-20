#include "main.h"
/**
 * Main : where function executes.
 * Description : Looks for an alphabetic character.
 * Return : Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
		
