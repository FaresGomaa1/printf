#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/* task 0 */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int write_default(const char *ptr);

#endif /* MAIN_H */
