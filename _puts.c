#include "main.h"
#include <stddef.h>
/**
 * _puts - Writes a string to stdout.
 * @str: The string to be written.
 *
 * Return: The number of characters written.
 */
int _puts(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}
