#include "main.h"
/**
 * Main : where function executes
 * Description : Looks for a digit value
 * Return 1 if digit O otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
