#include"main.h"

/**
* _strlen - function that returns the length of a string.
*
* @s: input
*
* Return: return( _strlen)
*
*/
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
