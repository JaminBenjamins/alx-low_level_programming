#include "main.h"
/**
 * wildcmp - compare strings
 * @s1: first string
 * @s2: second string to compare
 *
 * Return: 1 if string considered identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return(*s1 == '\0');
	if (*s2 == *s1)
		return(*s1 != '\0' && wildcmp(s2 + 1),(s1 + 1));
	if (*s2 == '*')
		return(wildcmp(s1, s2 + 1) || *s1 == '\0' && wildcmp(s2, s + 1));
	return(0);
}
