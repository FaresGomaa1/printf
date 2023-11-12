#include "main.h"
/**
 * _putint - Writes an integer to stdout.
 * @n: The integer to be written.
 *
 * Return: The number of characters written.
 */
int _putint(int n)
{
	int count = 0;
	int sign = 1;

	if (n < 0)
	{
		_putchar('-');
		count++;
		sign = -1;
	}

	if (n / 10)
		count += _putint((n / 10) * sign);

	_putchar((n % 10) * sign + '0');
	count++;

	return (count);
}
