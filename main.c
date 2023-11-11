#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
* _printf - Custom printf function
* @format: Format string
*
* Return: Number of characters printed (excluding null byte)
*/
int _printf(const char *format, ...)
{
va_list args;
const char *ptr;
int count = 0;

va_start(args, format);

for (ptr = format; *ptr != '\0'; ptr++)
{
if (*ptr == '%' && *(ptr + 1) != '\0')
{
switch (*(ptr + 1))
{
case 'c':
count += print_char(args);
break;
case 's':
count += print_string(args);
break;
case '%':
count += write(1, "%", 1);
break;
default:
count += write_default(ptr);
break;
}
ptr++;
}
else
{
count += write(1, ptr, 1);
}
}

va_end(args);

return (count);
}

/**
* print_char - Helper function to print a character
* @args: Argument list
*
* Return: Number of characters printed
*/
int print_char(va_list args)
{
char c = (char)va_arg(args, int);
return (write(1, &c, 1));
}

/**
* print_string - Helper function to print a string
* @args: Argument list
*
* Return: Number of characters printed
*/
int print_string(va_list args)
{
char *str = va_arg(args, char *);
return (write(1, str, strlen(str)));
}

/**
* write_default - Helper function to write default case
* @ptr: Current position in the format string
*
* Return: Number of characters printed
*/
int write_default(const char *ptr)
{
int count = 0;
count += write(1, "%", 1);
count += write(1, (ptr + 1), 1);
return (count);
}
