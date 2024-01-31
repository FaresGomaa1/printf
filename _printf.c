#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h> /* for sprintf */

/**
 * write_char - Writes a single character to standard output.
 * @c: The character to be written.
 * Return: The number of characters written.
 */
static int write_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * write_str - Writes a string to standard output.
 * @str: The string to be written.
 * Return: The number of characters written.
 */
static int write_str(char *str)
{
	int count = 0;

	while (*str)
	{
		count += write_char(*str);
		str++;
	}
	return (count);
}

/**
 * write_int - Writes an integer to standard output.
 * @n: The integer to be written.
 * Return: The number of characters written.
 */
static int write_int(int n)
{
	char buffer[12];

	sprintf(buffer, "%d", n);
	return (write_str(buffer));
}

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (format && *format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
			case 'c':
				count += write_char(va_arg(args, int));
				break;
			case 's':
				count += write_str(va_arg(args, char *));
				break;
			case '%':
				count += write_char('%');
				break;
			case 'd':
			case 'i':
				count += write_int(va_arg(args, int));
				break;
			default:
				count += write_char('%');
				count += write_char(*format);
				break;
			}
		}
		else
		{
			count += write_char(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
