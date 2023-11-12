#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d]\n", len);

    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    
    _printf("Integer:[%d]\n", 12345);
    _printf("Binary:[%b]\n", 98);

    _printf("Address:[%p]\n", (void *)0x7ffe637541f0);
    _printf("Percent:[%%]\n");

    _printf("Unknown:[%r]\n");

    return (0);
}
