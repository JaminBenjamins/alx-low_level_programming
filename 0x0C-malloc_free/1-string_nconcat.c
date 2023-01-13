#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of strings
 *
 * Return: pointer to a new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *add;
	unsigned int len;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	len = n;
	for (i = 0; s1[i]; i++)
		len++;

	add = malloc(sizeof(char) * (len + 1));

	if (add == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		add[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		add[len++] = s2[i];
	
	add[len++] = '\0';
	
	return (add);
}
