#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h> /* for sprintf */

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
                    count += write(1, va_arg(args, int), 1);
                    break;
                case 's':
                    count += write(1, va_arg(args, char *), 1);
                    break;
                case '%':
                    count += write(1, "%", 1);
                    break;
                case 'd':
                case 'i':
                    {
                        char buffer[12];
                        sprintf(buffer, "%d", va_arg(args, int));
                        count += write(1, buffer, strlen(buffer));
                    }
                    break;
                default:
                    count += write(1, "%", 1);
                    count += write(1, format, 1);
                    break;
            }
        }
        else
        {
            count += write(1, format, 1);
        }

        format++;
    }

    va_end(args);
    return count;
}
