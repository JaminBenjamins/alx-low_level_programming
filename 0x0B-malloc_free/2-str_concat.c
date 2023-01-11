#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated
 *
 * Return: pointer to memory which holds s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int i;
       	int concat_i = 0, len = 0;
	char *conc_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i] || s1[i]; i++)
		len++;

	conc_str = malloc(sizeof(char) * (len + 1));

	if (conc_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		conc_str[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		conc_str[concat_i++] = s2[i];

	return (conc_str);
}
