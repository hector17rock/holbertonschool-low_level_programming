#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generate key for crackme5
 * @argc: Number of arguments
 * @argv: Arguments array
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    unsigned int i;
    size_t len;
    char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char p[7] = "      ";
    
    if (argc != 2)
    {
        printf("Correct usage: ./keygen5 username\n");
        return (1);
    }

    len = strlen(argv[1]);
    p[0] = l[(len ^ 59) & 63];
    
    for (i = 0; i < len; i++)
        p[1] = l[(argv[1][i] ^ 79) & 63];
    
    p[2] = l[(len ^ 85) & 63];
    
    for (i = 0; i < len; i++)
        p[3] = l[(argv[1][i] ^ 18) & 63];
    
    for (i = 0; i < len; i++)
        p[4] = l[(argv[1][i] ^ 33) & 63];
    
    p[5] = l[(len ^ 24) & 63];
    p[6] = '\0';
    
    printf("%s", p);
    return (0);
}
