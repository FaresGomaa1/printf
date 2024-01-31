#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Let's try _printf: %c, %s, %d, %i, %%\n", 'H', "Hello", 123, -456);
    printf("Length: %d\n", len);

    return (0);
}