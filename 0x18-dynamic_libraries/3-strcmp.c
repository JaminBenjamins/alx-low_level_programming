#include "main.h"
/**
 * _strcmp a function that compares two strings
 * @str1 first string
 * @str2 second string
 * Return : returns zero if s1 = s2
 * returns - if s1 < s2
 * returns + if s2 > s1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp = 0;
	int diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;

		else if (s1[i] == '\0')
		{
			cmp = s2[i];
			break;	
		}
		else if (s2[i] == '\0')
		{	
			cmp = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			cmp = s2[i] -s1[i];
			break;
		}
		else 
			i++;
		diff = cmp;
	}
	return (diff);
}
