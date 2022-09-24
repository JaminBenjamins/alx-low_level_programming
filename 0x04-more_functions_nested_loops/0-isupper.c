#include "main.h"
/**
 * _isupper where function executes
 * @c is the parameter
 * Description : Checks for uppercase character
 * Return 0 Always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
