#include <stdio.h>

/* Function to check if a character is lowercase */
int is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/* Main function */
int main(void)
{
	char ch = 'a';

	if (is_lowercase(ch))
	{
		printf("%c is lowercase.\n", ch);
	}
	else
	{
		printf("%c is not lowercase.\n", ch);
	}

	return (0);
}
