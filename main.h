#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
int _printf(const char *format, ...);
/* produces output according to a format (c, s, %) */
int _putchar(char c);
int _puts(char *str);

/* produces output according to a format (d, i) */
int _putint(int n);

/* produces output according to a format (b) */
int _putbinary(unsigned int n);

#endif /* MAIN_H */
