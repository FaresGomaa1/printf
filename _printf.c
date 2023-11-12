#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* _printf - Produces output according to a format.
* @format: A character string containing directives.
*
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (format && format[count])
	{
		if (format[count] == '%' && format[count + 1] != '\0')
		{
			count++;
			switch (format[count])
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _puts(va_arg(args, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
				case 'i':
					count += _putint(va_arg(args, int));
					break;
				case 'b':
					count += _putbinary(va_arg(args, unsigned int));
					break;
				default:
					count += _putchar('%') + _putchar(format[count]);
					break;
			}
		}
		else
		{
		count += _putchar(format[count]);
		}

		count++;
	}

	va_end(args);

	return (count);
}
