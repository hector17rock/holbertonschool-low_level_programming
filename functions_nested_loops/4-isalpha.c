/**
 * _isalpha - Checks if the given character is an alphabetic letter.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
