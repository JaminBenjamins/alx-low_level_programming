#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that duplicates a string and returns a pointer to the string
 * @str: string to be duplicated
 *
 * Return: NULL if string is NULL
 * on success returns pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, len;
	char *dpstr;

	if (str == NULL)
		return (NULL);
	
	len = 0;
	while (str[len] != '\0')
		len++;
	
	dpstr = malloc(sizeof(char) * (len + 1));

	if (dpstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dpstr[i] = str[i];
	dpstr[len] = '\0';
	return (dpstr);
}
