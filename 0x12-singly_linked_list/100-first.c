#include <stdio.h>
/**
 * first - a function that prints before the main
 * Return: nothing
 */
void __attribute__((constructor))first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
