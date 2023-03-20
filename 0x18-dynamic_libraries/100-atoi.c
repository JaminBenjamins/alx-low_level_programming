#include "main.h"
/**
 * _atoi converts a string to an integer
 * @s : the string to be converted
 * return : the integer value to be converted to string
 */
int _atoi(char *s)
{
	int un = 1;
	unsigned int all = 0;
	char conv = 0;

	while (*s)
	{
		if (*s == '-')
			un *= -1;
		if (*s >= '0' && *s <= '9')
		{
			conv = 1;
			all = (all * 10) + (*s - '0');
		}
		else if (conv)
			break;
		s++;
	}
	if (un < 0)
		all = (-all);
	return (all);
}
