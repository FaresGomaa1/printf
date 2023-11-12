#include "main.h"
/**
 * _putbinary - Writes an unsigned int in binary to stdout.
 * @n: The unsigned int to be written in binary.
 *
 * Return: The number of characters written.
 */
int _putbinary(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += _putbinary(n / 2);

	_putchar((n % 2) + '0');
	count++;

	return (count);
}
