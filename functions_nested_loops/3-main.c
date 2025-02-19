#include <stdio.h>
#include "main.h"

int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);  /* ASCII value for 'l' */
    putchar(r + '0');
    putchar('\n');

    return (0);
}
